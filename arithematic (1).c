#include <stdio.h>
int main() {
    int choice;
    int num1, num2, result;
    printf("--- Arithmetic Operations Menu ---\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %d + %d = %d\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %d - %d = %d\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %d * %d = %d\n", num1, num2, result);
            break;
        case 4: 
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %d / %d = %d\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice! Please select an option between 1 and 4.\n");
            break;
    }
    return 0;
    }
