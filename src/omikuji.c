#include <stdio.h>
#include <stdlib.h>

int GetRandom(int min, int max);

int main(void)
{
    printf("おみくじスタート！！\n");

    
    for (int i = 0; i < 10; i++) {
        int kuji = GetRandom(0, 9);
        printf("kuji is %d \n", kuji);
        if (kuji >= 7)
        {
            printf("大吉！\n");
        }
        else if (7 > kuji && kuji >= 4)
        {
            printf("吉！\n");
        }
        else
        {
            printf("凶！\n");
        }
    }

    return 0;
}

int GetRandom(int min, int max)
{
    return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}
