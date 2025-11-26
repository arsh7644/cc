#include <stdio.h>

int main() {
    int num;
    int *ptr;

    printf("Enter a number: ");
    scanf("%d", &num);

    ptr = &num;

    printf("Memory address of the number : %p\n", ptr);

    return 0;
}
