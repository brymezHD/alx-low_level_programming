#include "main.h"
#include <stdio.h>

/**
 * main - change the value to 98
 *
 * Return: Always 0.
 */
void reset_to_98(int *n);
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    *n = 98;
    printf("n=%d\n", n);
    return (0);
}
