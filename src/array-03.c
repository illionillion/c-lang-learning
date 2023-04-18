#include <stdio.h>

int main(void)
{

    int i, count = 0, score = -1, no = 0, length = 4;
    int arr[length];

    for (i = 0; i < length; i++)
    {
        arr[i] = -1; // 初期化
    }

    // 得点の入力
    while (1)
    {
        scanf("%d", &score);
        if (score < 0)
            break;
        arr[count] = score;
        count++;
    }

    // 学生番号から得点の出力
    while (1)
    {
        scanf("%d", &no); // 1 ~ 4までが入力
        no--;
        if (length > no && no > -1) // 0 ~ 3までしか許されない
        {
            printf("%d点です\n", arr[no]);
        }
        else
        {
            break;
        }
    }

    return 0;
}