#include <stdio.h>
main()
{
    FILE *f1;
    f1 = fopen("INPUT", "w");
    char c;
    printf("Input Data\n\n");
    while ((c = getchar()) != EOF)
    {
        putc(c, f1);
    }
    fclose(f1);
    f1 = fopen("INPUT", "r");
    printf("\nOutput Data\n\n");
    while ((c = getc(f1)) != EOF)
    {
        printf("%c", c);
    }
    fclose(f1);
}