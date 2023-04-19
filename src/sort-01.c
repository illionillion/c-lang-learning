#include <stdio.h>
#define MAX 10
int main(void)
{
    int arr[MAX];
    int i, j, n, input, temp;
    for (i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        arr[i] = -1;
    }

    while (n < MAX)
    {
        scanf("%d", &input);

        if (input < 0)
        {
            break;
        }

        arr[n] = input;
        n++;
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}