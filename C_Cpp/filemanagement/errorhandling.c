#include <stdio.h>
void main(void)
{
    FILE *f1;
    f1 = fopen("bla", "r");
    if (f1 == NULL)
    {
        printf("File can not be opened\n");
    }
    FILE *f2;

    f2 = fopen("INPUT", "r");
    if (f2 == NULL)
    {
        printf("file cannot be opened.\n");
    }
    else
    {
        int i = 0;
        char ch;
        while (i < 200)
        {
            if (feof(f2))
            {
                printf("\nwe have reached the end of the file\n");
                break;
            }

            ch = fgetc(f2);
            printf("%c", ch);
        }
    }
}