#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num1, num2, result;
    int (*func)(int, int);

    if (argc != 4)
    {
        printf("%d\n", argc);
        printf("Please check argument count\n");
        exit(98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    func = get_op_func(argv[2]);

    if (func == NULL)
    {
        printf("No function operator called\n");
        exit(99);
    }

    result = func(num1, num2);
    printf("%d\n", result);

    return (0);
}