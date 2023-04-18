#include <stdio.h>
int main(void)
{

    int i = 0, length = 8, weight = 0;

    // 重さの配列
    int weight_arr[8] = {
        50, // kgまで
        100,
        150,
        250,
        500,
        1000,
        2000,
        4000};
    // 料金の配列
    int fee_arr[8] = {
        120,
        140,
        200,
        240,
        390,
        580,
        850,
        1150};

    // 郵便物の重さ入力
    scanf("%d", &weight);

    // 該当する重さを取得
    while (i < length)
    {
        if (weight <= weight_arr[i])
        {
            break;
        }
        else
        {
            i++;
        }
    }

    // 料金
    printf("%d\n", fee_arr[i]);

    return 0;
}