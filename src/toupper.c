#include <stdio.h>
#include <ctype.h> // toupper関数を使用するために必要

int main(void)
{
    int c;

    while ((c = getchar()) != EOF) {
        if (islower(c)) { // 小文字の場合は大文字に変換
            c = toupper(c);
        }
        putchar(c); // 文字を出力
    }

    return 0;
}
