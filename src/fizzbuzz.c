#include <stdio.h>

int main (void) {
    for (int i = 1; i <= 100; i++)
    {
        // fizzbuzz
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("fizzbuzz\n");
        }
        // fizz
        else if (i % 3 == 0)
        {
            printf("fizz\n");
        }
        // buzz
        else if (i % 5 == 0)
        {
            printf("buzz\n");
        } else {
            printf("%d\n", i);
        }
        
        
        
    }
    
    return 0;
}