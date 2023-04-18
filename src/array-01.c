#include <stdio.h>

int main(void)
{
    int test[5];
    test[4] = 5;
    test[3] = 4;
    test[2] = 3;
    test[1] = 2;
    test[0] = 1;
    int i, length;
    length = sizeof(test) / sizeof(int);
    for (i = length - 1; i > -1; i--)
    {
        printf("test[%d]=[%d]\n", i, test[i]);
    }
    return 0;
}
