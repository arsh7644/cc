#include <stdio.h>

int main() {
    int num = 40;
    int *ptr = &num;

    printf("Before update: %d\n", num);

    (*ptr)++;

    printf("After update: %d\n", num);

    return 0;
}
