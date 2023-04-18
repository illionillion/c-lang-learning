#include <stdio.h>

int main(void)
{
    int i;
    int fib[10];

    fib[0] = 1;
    fib[1] = 1;

    int length = sizeof(fib) / sizeof(int); // 要素数

    // フィボナッチ数列を計算して配列に格納する
    for (int i = 2; i < length; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // 配列の要素を繰り返し表示する
    for (int i = 0; i < length; i++)
    {
        printf("fib[%d]=%d\n", i, fib[i]);
    }

    return 0;
}
