#include <stdio.h>
float add(float a, float b) {
    return a + b;
}
float subtract(float a, float b) {
    return a - b;
}
float multiply(float a, float b) {
    return a * b;
}
float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero.\n");
        return 0;
    }
}
int main() {
    float num1, num2, result;
    int choice;

    printf("Simple Calculator\n");
    printf("------------------\n");
    printf("Select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1/2/3/4): ");
    scanf("%d", &choice);
    if (choice < 1 || choice > 4) {
        printf("Invalid choice! Please run the program again.\n");
        return 1;
    }
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Perform operation based on user choice
    switch (choice) {
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
            result = divide(num1, num2);
            if (num2 != 0) // Only show result if division is valid
                printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
            break;
    }
    return 0;
}


