#include <stdio.h>
void main(int argc, char *argv[])
{
    FILE *fp;
    fp = fopen(argv[1], "w");
    int i;
    char word[15];
    for (i = 2; i < argc; i++)
    {
        fprintf(fp, "%s ", argv[i]);
    }
    fclose(fp);
    printf("Contents of %s file\n", argv[1]);
    fp = fopen(argv[1], "r");
    for (i = 2; i < argc; i++)
    {
        fscanf(fp, "%s", word);
        printf("%s ", word);
    }
    fclose(fp);
    printf("\n\n");
}