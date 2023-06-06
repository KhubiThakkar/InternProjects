#include <stdio.h>
#include <stdlib.h>
struct list
{
    int n;
    struct list *next;
};
typedef struct list node;
void create(node *p);
void printing(node *p);
void adding(node *p, int number);
void deleting(node *p, int number);
void main()
{
    node *head = (node *)malloc(sizeof(node));
    create(head);
    printf("\n\n");
    printing(head);
    printf("\n\n");
    adding(head, 4);
    printf("\n\n");
    printing(head);
    deleting(head, 4);
    printf("\n\n");
    printing(head);

    free(head);
}

void create(node *p)
{
    printf("Enter -999 if you wanna end the linked list. TYPE THE DATA: ");
    scanf("%d", &p->n);
    printf("\n");
    if (p->n == -999)
    {
        p->next = NULL;
    }
    else
    {
        p->next = (node *)malloc(sizeof(node));
        create(p->next);
    }
}

void adding(node *p, int number)
{
    int i = 0;
    while (i < number)
    {
        p = p->next;
        i++;
    }
    node *extra = (node *)malloc(sizeof(node));
    extra->next = p->next;
    p->next = extra;
    printf("Enter the value for added node: ");
    scanf("%d", &extra->n);
}

void printing(node *p)
{
    while (p->n != -999)
    {
        printf("%d", p->n);
        printf("\n");
        p = p->next;
    }
}

void deleting(node *p, int number)
{
    int i = 0;
    while (i < number)
    {
        p = p->next;
        i++;
    }
    node *q = p->next->next;
    free(p->next);
    p->next = q;
}