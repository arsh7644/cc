#include <stdio.h>

int main(){
    int digit ;


    printf("Enter a digit (1-7): ");
    scanf("%d", &digit );


    if (digit == 0)
        printf("zero\n");

        else if (digit == 1)
            printf("one\n");

        else if (digit == 3){
            printf("Three\n");
        }
        else if (digit == 4){
            printf("Four\n");
        }
        else if (digit == 5){
            printf("Five\n");
        }
        else if (digit == 6){
            printf("Six\n");
        }
        else if (digit == 7){
            printf("Seven\n");
        }
        else{

            printf("Error: Invalid day number! Please enter a number between 1 and 7.\n");
        }

    }

    return 0;
}
