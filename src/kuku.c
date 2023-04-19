#include <stdio.h>

int main(void)
{

    int kuku[9][9], i, j;

    for (i = 1; i < 10; i++)
    {
        for (j = 1; j < 10; j++)
        {
            kuku[i - 1][j - 1] = i * j;
        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            printf("%3d ", kuku[i][j]);
        }
        printf("\n");
    }

    return 0;
}