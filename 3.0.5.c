#include <stdio.h>

int main() {
    char grade;

    // Input
    printf("Enter Grade (E, V, G, A, F): ");
    scanf("%c", &grade);


    switch(grade) {
        case 'E':
        case 'e':
            printf("Excellent\n");
            break;
        case 'V':
        case 'v':
            printf("Very Good\n");
            break;
        case 'G':
        case 'g':
            printf("Good\n");
            break;
        case 'A':
        case 'a':
            printf("Average\n");
            break;
        case 'F':
        case 'f':
            printf("Fail\n");
            break;
        default:
            printf("Invalid Grade Entered\n");
    }

    return 0;
}
