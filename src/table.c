#include <stdio.h>

int main(void)
{
    int ar[4][4] = {{-1, 0, 1, 0},
                    {0, 1, 0, -1},
                    {0, 0, 1, 0},
                    {1, -1, 1, -1}};
    int i, j;
    // 表を作る
    for (i = 0; i < 4; i++)
    {
        printf("+-+-+-+-+\n");
        for (j = 0; j < 4; j++)
        {
            printf("|");
            switch (ar[i][j])
            {
            case 1:
                printf("o");
                break;
            case -1:
                printf("x");
                break;

            default:
                printf(" ");
                break;
            }
        }
        printf("|");
        printf("\n");
    }
    printf("+-+-+-+-+\n");

    return 0;
}
