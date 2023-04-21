#include <stdio.h>

struct Book
{
    char title[50];
    int value;
    int pages;
};

int main()
{
    struct Book books[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("%d冊目タイトル: ", i + 1);
        scanf("%s", books[i].title);
        printf("%d冊目価格: ", i + 1);
        scanf("%d", &books[i].value);
        printf("%d冊目ページ数: ", i + 1);
        scanf("%d", &books[i].pages);
    }

    for (i = 0; i < 3; i++)
    {
        printf("%d冊目データ{title=%s,value=%d,pages=%d}\n",
               i + 1, books[i].title, books[i].value, books[i].pages);
    }

    return 0;
}
