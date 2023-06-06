#include <stdio.h>
int main()
{
    FILE *j1;
    j1 = fopen("Inventory", "w");
    printf("Enter the data\n");
    printf("Item name\tNumber\tPrice\tQuantity\n");
    int i = 0, number, quantity;
    char item[40];
    float price;

    for (i = 0; i <= 3; i++)
    {
        scanf("%s\t%d\t%f\t%d", item, &number, &price, &quantity);
        fprintf(j1, "%s\t%d\t%.2f\t%d\n", item, number, price, quantity);
    }
    fclose(j1);
    return (0);
}