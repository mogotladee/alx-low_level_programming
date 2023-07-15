#include <stdio.h>

int main(void)
{
    int i, j, k, l;

    for (i = 0; i <= 98; i++)
    {
        for (j = i + 1; j <= 99; j++)
        {
            for (k = 0; k <= 98; k++)
            {
                for (l = k + 1; l <= 99; l++)
                {
                    putchar(i / 10 + '0');
                    putchar(i % 10 + '0');
                    putchar(' ');
                    putchar(j / 10 + '0');
                    putchar(j % 10 + '0');

                    if (!(i == 98 && j == 99 && k == 98 && l == 99))
                    {
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
    }

    putchar('\n');

    return 0;
}

