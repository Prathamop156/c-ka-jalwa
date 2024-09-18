#include <stdio.h>

int main() {
    int a = 5;  // First number
    int b = 10; // Second number

    // Swap without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Output the swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
