#include <stdio.h>

int main() {
    int num = 12;
    int *ptr = &num;

    printf("Value using variable: %d\n", num);
    printf("Value using pointer: %d\n", *ptr);

    return 0;
}
