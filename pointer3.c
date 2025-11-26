#include <stdio.h>

int main() {
    float f = 5.5;
    float *ptr = &f;

    printf("Size of float varaiable: %lu bytes\n", sizeof(f));
    printf("Size of float pointer: %lu bytes\n", sizeof(ptr));

    return 0;
}
