#include <stdio.h>

int main()
{
    char str[100];
    int i;
    printf("Input: ");
    fgets(str, 100, stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32; // 小文字を大文字に変換
        }
    }

    puts(str);

    return 0;
}
