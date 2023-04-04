#include <stdio.h>

int main (void) {
    
    char* str ;
    printf("文字列を入力："); 
    scanf("%s", str);
    printf("入力された文字列%s", str);

    return 0;
}