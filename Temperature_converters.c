#include <stdio.h>

int main() {
    int choice;
    float temp, result;

    printf("=== Temperature Converter ===\n");
    printf("Choose conversion option:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Celsius to Kelvin\n");
    printf("3. Fahrenheit to Celsius\n");
    printf("4. Fahrenheit to Kelvin\n");
    printf("5. Kelvin to Celsius\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 6) {
        printf("Invalid choice! Please run the program again.\n");
        return 1;
    }

    printf("Enter the temperature: ");
    scanf("%f", &temp);

    if (choice == 1) {
        result = (temp * 9 / 5) + 32;
        printf("Result: %.2f Celsius = %.2f Fahrenheit\n", temp, result);
    } else if (choice == 2) {
        result = temp + 273.15;
        printf("Result: %.2f Celsius = %.2f Kelvin\n", temp, result);
    } else if (choice == 3) {
        result = (temp - 32) * 5 / 9;
        printf("Result: %.2f Fahrenheit = %.2f Celsius\n", temp, result);
    } else if (choice == 4) {
        result = ((temp - 32) * 5 / 9) + 273.15;
        printf("Result: %.2f Fahrenheit = %.2f Kelvin\n", temp, result);
    } else if (choice == 5) {
        result = temp - 273.15;
        printf("Result: %.2f Kelvin = %.2f Celsius\n", temp, result);
    } else if (choice == 6) {
        result = ((temp - 273.15) * 9 / 5) + 32;
        printf("Result: %.2f Kelvin = %.2f Fahrenheit\n", temp, result);
    }

    return 0;
}
