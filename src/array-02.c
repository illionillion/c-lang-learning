#include <stdio.h>
int main (void) {

    int i = 0, n = 10, input = -1;
    int arr[n];
    while (1)
    {
        scanf("%d", &input);
        if(input < 0) break;
        arr[i++] = input;
        if (i >= n)
        {
            break;
        }
        
    }

    for (i -= 1; i > -1; i--)
    {
        printf("%d　", arr[i]);
    }

    return 0;
}