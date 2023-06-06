#include <stdio.h>
#include <stdlib.h> // declared so we can use the exit function
#include <string.h>
#include <malloc.h>
main()
{
    char *ptr;
    // Allocating memory of said size
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    if ((ptr = (char *)malloc(n * sizeof(char))) == NULL)
    {
        printf("\nThe memory is not enough to allocate.\n");
        exit(1);
    }
    strcpy(ptr, "hello world");
    printf("the string contains: %s\n", ptr);
    // change the size of memory
    if ((ptr = (char *)realloc(ptr, 15 * sizeof(char))) == NULL)
    {
        printf("Memory allocation failed.\n");
        printf("all the data lost\n");
        exit(1);
    }
    printf("buffer has been modified\n");
    strcpy(ptr, "how are you bat\n");
    printf("Memory contains: %s", ptr);

    // free the memory
    free(ptr);
}