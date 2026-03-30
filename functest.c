#include <stdio.h>
int power(int m, int n); // Function prototype
int main() {
    int integer;
    for (integer = 0; integer < 10; ++integer)
        printf("%d %d %d\n", integer, power(2, integer), power(-3, integer));
    return 0;
}

// Actual function impl
int power(int base, int n) {
    int integer, p;
    p = 1;
    for (integer = 1; integer <= n; ++integer)
        p = p * base;
    return p;
}
