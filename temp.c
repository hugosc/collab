#include <stdio.h>
int main() {
    int fahr, celsius; // Declaration of vars
    int lower, upper, step;
    lower = 0;   // Lower limit of temperature table
    upper = 100; // Assignment statements (vars -> values)
    step = 10;   // Step size
    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%3d %6d\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}
