#include <stdio.h>

int main() {
    int num;
    printf("整数を入力してください: ");
    scanf("%d", &num);
    num = (num << 1) + (num << 3);
    printf("10倍した数は %d です。\n", num);
    return 0;
}
