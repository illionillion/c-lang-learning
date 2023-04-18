#include <stdio.h>
#define LENGTH 10
int main(void)
{

    int arr[LENGTH];
    int i, input = -1;
    for (i = 0; i < LENGTH; i++)
    {
        arr[i] = 0;
    }

    while (1)
    {
        scanf("%d", &input);
        if (input < 0)
            break;
        // このinputの値が度数分布のどの範囲に位置するかを求める
        for (i = 0; i < LENGTH; i++)
        {
            if (input <= (i + 1) * 10)
            {
                arr[i] += 1;
                break;
            }
        }
    }

    // 結果の表示
    printf("度数分布\n");
    for (i = 0; i < LENGTH; i++)
    {
        printf("%2d～%2d：　%d\n", i == 0 ? i * 10 : i * 10 + 1, i * 10 + 10, arr[i]);
    }

    return 0;
}