#include <stdio.h>

int main(void)
{
    /*この配列を使い問題のプログラムを作成しなさい*/
    int array[10] = {-4, 15, 0, 82, 7, -5, 12, 2, 72, -81};

    int i, min, max;

    for (i = 0; i < sizeof(array) / sizeof(int); i++)
    {
        int ele = array[i];
        if (i == 0)
        {
            min = ele;
            max = ele;
        }
        else
        {
            min = ele < min ? ele : min;
            max = ele > max ? ele : max;
        }
    }

    printf("最小値:%d\n", min);
    printf("最大値:%d\n", max);

    return 0;
}
