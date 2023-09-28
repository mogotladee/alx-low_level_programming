#include <stdio.h>
#include "main.h"

int main(void)
{
    int n;

    n = get_endianness();
    if (n != 0)
    {
        printf("big different numbers\n");
    }
    else
    {
        printf("different numbers\n");
    }
    return (0);
}
