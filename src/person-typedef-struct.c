#include <stdio.h>

typedef struct Person
{
    char name[20];
    int age;
    char gender;
} Person;

typedef struct Couple
{
    Person boy;
    Person girl;
} Couple;

int main()
{
    Couple c = {
        .boy = {"Ichiro", 20, 'M'},
        .girl = {"Hanako", 19, 'F'}};

    printf("Couple:\n");
    printf("  boy:{name=%s,age=%d,gender=%c}\n", c.boy.name, c.boy.age, c.boy.gender);
    printf("  girl:{name=%s,age=%d,gender=%c}", c.girl.name, c.girl.age, c.girl.gender);

    return 0;
}
