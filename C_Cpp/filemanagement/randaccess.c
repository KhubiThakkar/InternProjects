#include <stdio.h>
main()
{
    FILE *f1;
    f1 = fopen("random", "w");
    char ch;
    int i = 0;
    for (i = 0; i <= 25; i++)
    {
        ch = getchar();
        putc(ch, f1);
    }
    printf("done entering the data\n");
    fclose(f1);
    printf("file closed after saving\n");
    printf("\n\n");
    f1 = fopen("random", "r");
    int n = 0;
    printf("start reading\n");
    while (n <= 25)
    {
        fseek(f1, n, 0);
        ch = fgetc(f1);
        printf("Position of %c is %d\n", ch, n);
        n += 5;
    }
    printf("\n");
    printf("reverse data\n");
    fseek(f1, -1L, 2);
    do
    {
        ch = getc(f1);
        printf("%c", ch);

    } while (!fseek(f1, -2L, 1));
    printf("\n");
}