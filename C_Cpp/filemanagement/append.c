#include <stdio.h>
struct invent_record
{
    char name[10];
    int number;
    float price;
    int quantity;
};
void append(struct invent_record *x, FILE *y);

void main(void)
{
    struct invent_record item;
    char filename[10];
    int response;
    FILE *fp;
    long n;
    printf("Type filename: \n");
    scanf("%s", filename);

    fp = fopen(filename, "a+");
    do
    {
        append(&item, fp);
        printf("Item %s is appended\n", item.name);
        printf("Do you want to append another entry? 1 for YES and 0 for NO.");
        scanf("%d", &response);
    } while (response == 1);
    n = ftell(fp);
    fclose(fp);
    fp = fopen(filename, "r");
    while (ftell(fp) < n)
    {
        fscanf(fp, "%s\t%d\t%f\t%d", item.name, &item.number, &item.price, &item.quantity);
        fprintf(stdout, "%-8s\t%7d\t%8.2f\t%8d\n", item.name, item.number, item.price, item.quantity);
    }
    fclose(fp);
}
void append(struct invent_record *product, FILE *ptr)
{
    printf("Item name: ");
    scanf("%s", product->name);
    printf("Item number: ");
    scanf("%d", &product->number);
    printf("Item price: ");
    scanf("%f", &product->price);
    printf("Item quantity: ");
    scanf("%d", &product->quantity);
    fprintf(ptr, "%s\t%d\t%.2f\t%d", product->name, product->number, product->price, product->quantity);
}