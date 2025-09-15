#include <stdio.h>

int main() {
    float sub1, sub2, sub3, sub4, sub5, aggregate, percentage;

    printf("Enter marks for 5 subjects (out of 100): ");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);

    aggregate = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (aggregate / 500) * 100;

    printf("Aggregate Marks = %.2f\n", aggregate);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
