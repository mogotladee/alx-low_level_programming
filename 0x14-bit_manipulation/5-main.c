#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = flip_bits(1026, 1);
    printf("%u\n", n);
    n = flip_bits(403, 98);
    printf("%u\n", n);
    n = flip_bits(1026, 3);
    printf("%u\n", n);
    n = flip_bits(1026, 1025);
    printf("%u\n", n);
    return (0);
}
