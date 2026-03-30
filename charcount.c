#include "stdio.h"
/* Char counting program. Count is  */
int main() {
    long count; // Long used because on some systems int has a size of 16 which
    count = 0;  // Is too small for most counting usecases
    while (getchar() != EOF) {
        ++count;
        printf("%ld\n", count); // ld used for long int instead of just %d
    }
}
