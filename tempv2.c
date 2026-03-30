/* This refactor uses a function to split logic away from the main function and
keep it clean */

#include <stdio.h>

// Function prototype so it doesn't get mad when used before defined
int fahr2celsius(int fahr);

// Main loop
int main() {
    int fahr;
    int lower, upper, step;
    lower = 0;   // Lower limit of temperature table
    upper = 100; // Assignment statements (vars -> values)
    step = 10;   // Step size
    fahr = lower;
    while (fahr <= upper) {
        printf("%3d %6d\n", fahr,
               fahr2celsius(fahr)); // Call the function and pass it our fahr
        fahr = fahr + step;
    }
    return 0;
}

// Function that converts fahr to celsius
int fahr2celsius(int fahr) {
    int celsius;
    celsius = 5 * (fahr - 32) / 9;
    return celsius;
}
