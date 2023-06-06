#include <stdio.h>
#include <stdlib.h>
struct list
{
    int number;
    struct list *next;
};
typedef struct list node;
void print(node *ptr);
node *create(node *ptr);
int count(node *h);
int main()
{
    node *head, *p;
    head = (node *)malloc(sizeof(node));
    int n;
    p = create(head);
    print(head);
    n = count(head);
    printf("the number of elements are: %d", n);
    printf("\n");
    return (0);
    free(head);
}
node *create(node *ptr)
{
    printf("Enter the value you want to enter: (To end the call enter -999  ");
    scanf("%d", &ptr->number);
    if ((ptr->number) == -999)
    {
        (ptr->next) = NULL;
        return (ptr);
    }
    else
    {
        ptr->next = (node *)malloc(sizeof(node));
        create(ptr->next);
    }
}
void print(node *ptr)
{
    printf("\n");
    while ((ptr->next) != NULL)
    {

        printf("%d ", ptr->number);
        ptr = ptr->next;
    }
    printf("\n");
}
int count(node *h)
{
    int r = 0;
up:
    if (h->next == NULL)
    {
        return (r);
    }
    else
    {
        r += 1;
        h = h->next;
        goto up;
    }
}