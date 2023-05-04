#include <stdio.h>

int main(void)
{
    int i;
    char filename[] = "f?.txt";
    FILE *fp;

    for (i = 0; i < 10; i++)
    {
        filename[1] = '0' + i;
        fp = fopen(filename, "w"); // filenameを書き込みモードでオープン
        if (fp == NULL)
        { // エラー処理
            printf("ファイルをオープンできませんでした。\n");
            return 1;
        }
        fclose(fp); // クローズするプログラム
    }

    return 0;
}
