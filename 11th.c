#include <stdio.h>

int main() {
    int number, i;
    int factorial = 1;

    // Get input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate factorial using a for loop
    for (i = 1; i <= number; i++) {
        factorial *= i;
    }

    // Display result
    printf("Factorial of %d is %d\n", number, factorial);

    return 0;
}
