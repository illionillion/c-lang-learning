#include <stdio.h>

typedef struct Car
{
    int num;    // ナンバー
    double gas; // ガソリン
} Car;          // 乗用車構造体

typedef struct Bus
{
    int num;      // ナンバー
    int capacity; // 乗車定員
} Bus;            // バス構造体

//------------------------------
// ここにVehicle共用体を宣言
typedef union Vehicle
{
    /* data */
    Car car;
    Bus bus;
} Vehicle;

//------------------------------

int main(void)
{
    Car c = {1234, 25.5};
    Bus b = {4567, 50};

    Vehicle v;

    v.car = c;
    printf("v.car.num=%d, v.car.gas=%.1f\n", v.car.num, v.car.gas);
    v.bus = b;
    printf("v.bus.num=%d, v.bus.capacity=%d\n", v.bus.num, v.bus.capacity);

    return 0;
}
