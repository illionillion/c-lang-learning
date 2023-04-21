#include <stdio.h>

struct Book {
    char title[50];
    int value;
    int pages;
};

int main() {
    struct Book b = {"Bible", 1365, 687};
    printf("{title=%s,value=%d,pages=%d}", b.title, b.value, b.pages);

    return 0;
}
