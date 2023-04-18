#include <stdio.h>
#define NUM 3
int main(void)
{

    printf("3個の数字を入力して下さい。\n");

    int max_count = NUM;
    int i;
    int max = -1 ;
    int input = 0 ;
    for (i = 0; i < max_count; i++)
    {
        scanf("%d", &input);
        max = input > max ? input : max;
    }

    printf("3個の整数の最大値は%dです。\n", max);

    return 0;
}