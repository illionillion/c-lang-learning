#include <stdio.h>

//------------------------------
// VType列挙を宣言
typedef enum VType
{
    CAR,
    BUS,
} VType;

//------------------------------

int main(void)
{
    int i;
    VType vehicles[] = {BUS, CAR, BUS, BUS, CAR};

    for (i = 0; i < 5; i++)
    {
        switch (vehicles[i])
        {
        case CAR:
            printf("%d番目は乗用車です.\n", i);
            break;
        case BUS:
            printf("%d番目はバスです.\n", i);
            break;
        }
    }

    return 0;
}
