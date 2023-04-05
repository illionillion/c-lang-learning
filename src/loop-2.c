#include <stdio.h>

/**
 * 二重ループしないやり方
*/
int main(void) 
{
    printf("整数を入力：");
    int num = 0;
    scanf("%d", &num);
    char str[num];
    for(int i=0;i < num; i++) {
        str[i] = '*';
        printf("%s\n", str);
    }
    return 0;
}