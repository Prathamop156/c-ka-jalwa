#include <stdio.h>

int main() {
    int a = 5;  // First number
    int b = 10; // Second number
    int c;      // Third variable to assist in swapping

    // Output before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap using a third variable 'c'
    c = a;  // Store the value of 'a' in 'c'
    a = b;  // Assign the value of 'b' to 'a'
    b = c;  // Assign the value stored in 'c' (original 'a') to 'b'

    // Output after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

