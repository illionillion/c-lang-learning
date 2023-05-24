#include <stdio.h>

int main() {
    // double a = 3.14159;
    // printf("%8.3f\n", a);

    // double b;
    // scanf("%lf", &b);
    // printf("体重: %f\n", b);

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("C言語\n");
    // }

    // int n, i, min = 999999;
    // for (int i = 1; i <= 10; i++)
    // {
    //     scanf("%d", &n);
    //     if (min > n) min = n;
    // }
    // printf("%d", min);

    // char test[100];
    // int i=0;
    // scanf("%s", test);
    // while (test[i] != '\0')
    // {
    //     printf("%c", test[i]);
    //     i++;
    // }
    
    // int i;
    // for (i = 0; i < 8; i++)
    // {
    //     if(i % 2 == 0) printf("%d ",i);
    // }

    int i,n = 0,test[5] = {2,5,1,8,4};
    for (i=0;i<5;i++) 
        n = n + test[i];
    n = n / 5;
    for (i=0;i<5;i++)
        if (test[i] >=n)
        printf("%d ",test[i]);   
    
    return 0;
}
