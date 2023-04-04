#include <stdio.h>

int main (void) {
    
    char* str ;
    printf("文字列を入力："); 
    scanf("%s", str);
    printf("入力された文字列%s\n", str);

    int n;
    char c;
    scanf("%d%c", &n, &c); // まとめて入力も可能
    printf("n=%d, c=%c\n", n, c);

    return 0;
}