#include <stdio.h>

int main(void) {
    char food[5] = {'A', 'B', 'C', 'D', 'F'}; // 文字が数字になってる
    for (int i = 0; i < sizeof(food); i++)
    {
        printf("好きな食べ物%d\n", food[i]);
    }
    
    return 0;
}