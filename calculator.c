#include <stdio.h>

float add(float,float);
float subtract(float,float);
float multiply(float,float);
float divide(float,float);
void check_which_is_smaller(float,float);
void check_which_is_larger(float,float);

int main() {
    int choice;
    float num1, num2, result;
    while (1)
        {

        printf("\n--'- Simple Calculator -'--\n");
        printf("==========24CSE40========\n");
        printf("1. Addition\n");
        printf("2. Subtract\n");
        printf("3. Multiplication\n");
        printf("4. Divide\n");
        printf("5. check which one is smaller\n");
        printf("6. check which one is larger\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 7) {
            printf("Exiting the calculator. Goodbye!\n");
            printf("thanks for using this\n");
            break;
        }

        printf("Enter frist number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f",&num2);

        switch (choice)
        {
            case 1:
                result = add(num1, num2);
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case 2:
                result = subtract(num1, num2);
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case 3:
                result = multiply(num1, num2);
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case 4:
                if (num2 != 0) {
                    result = divide(num1, num2);
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                } else {
                    printf("Error ! Division by zero is defined.\n");
                }
                break;

            case 5:
                    check_which_is_smaller(num1, num2);
                break;
            case 6:
                    check_which_is_larger(num1, num2);
                break;
                default:
                    {
                        printf("  _____  _____   _____  _____  _____ \n");
    printf(" |  S  |  Y  |  N  |  T  |  A  |  X  |\n");
    printf(" |  E  |  R  |  O  |  R  |     |\n");
    printf("  --------------------------------\n");

                   printf("Invalid choice! Please try again.\n"); } }



                }

    return 0;   }


float add(float a, float b) {
    return a + b;   }


float subtract(float a, float b) {
    return a - b;   }


float multiply(float a, float b) {
    return a * b;   }

float divide(float a, float b) {
    return a / b;   }

void check_which_is_smaller(float a,float b){
    if (a<b)
        printf("smaller value is %f" ,a);
    else
        printf("smaller value is %f" ,b);
    };

void check_which_is_larger(float a,float b){
    if (a<b)
        printf("larger value is %f" ,b);
    else
        printf("larger value is %f" ,a);
    };
