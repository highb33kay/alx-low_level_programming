#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *concat;
    char *c;
    int *a;
    int i;
    char *p;

    printf("starting string_nconcat\n");
    concat = string_nconcat("Holberton ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    printf("ending string_nconcat\n");

    printf("starting _calloc\n");
    c = malloc_checked(1024);
    free(c);
    printf("ending _calloc\n");

    printf("starting _calloc\n");
    a = _calloc(98, sizeof(int));
    a[97] = 'H';
    a[96] = 'o';
    a[95] = 'l';
    a[94] = 'b';
    a[93] = 'e';
    a[92] = 'r';
    a[91] = 't';
    a[90] = 'o';
    a[89] = 'n';
    a[98] = '!';
    a[99] = '\0';
    printf("%s\n", (char *)a);
    free(a);
    printf("ending _calloc\n");

    printf("starting array_range\n");
    a = array_range(0, 10);
    for (i = 0; i <= 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    free(a);
    printf("ending array_range\n");

    printf("starting _realloc\n");
    p = malloc(sizeof(char) * 10);
    p = _realloc(p, sizeof(char) * 10, sizeof(char) * 98);
    i = 0;
    while (i < 98)
    {
        p[i++] = 98;
    }
    p[i] = '\0';
    printf("%s\n", p);
    free(p);
    printf("ending _realloc\n");

    return 0;
}
