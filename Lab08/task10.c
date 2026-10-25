#include <stdio.h>
float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) { return b != 0 ? a / b : 0; }
int main() {
    float (*operations[4])(float, float) = {add, subtract, multiply, divide};
    int choice;
    float a, b;
    do {
        printf("\n=== CALCULATOR MENU ===\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        printf("Choice (1-5): ");
        if (scanf("%d", &choice) != 1 || choice == 5) break;
        if (choice < 1 || choice > 4) {
            printf("Invalid choice!\n");
            continue;
        }
        printf("Enter a and b: ");
        scanf("%f %f", &a, &b);
        if (choice == 4 && b == 0) {
            printf("Error: division by zero\n");
        } else {
            float result = operations[choice - 1](a, b);
            printf("Result: %.2f\n", result);
        }
    } while (choice != 5);
    return 0;
}