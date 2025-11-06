#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitOrLoss;


    printf("Enter Cost Price (CP): ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price (SP): ");
    scanf("%f", &sellingPrice);


    profitOrLoss = sellingPrice - costPrice;


    if (profitOrLoss > 0)
        printf("Profit = %.2f\n", profitOrLoss);
    else if (profitOrLoss < 0)
        printf("Loss = %.2f\n", -profitOrLoss);
    else
        printf("No Profit No Loss\n");

    return 0;
}
