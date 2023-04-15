#include<stdio.h>

int main(void)
{
    int input=0, sum=0;
    do {
        scanf("%d", &input);
        if (input == 0) break;
        sum += input;
    } while (1);
    printf("合計は%dです\n", sum);
    return 0;
}
