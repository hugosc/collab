#include <stdbool.h>
#include <stdio.h>

int main() {
    // Integers (4 bytes)
    int age = 20;

    // Floating Point numbers (4 bytes)
    float grams = 1.1;

    // Chars store a single character (1 byte)
    char grade = 'A';

    // To store more than one, use an array of chars (varies)
    char email[] = "Crocod1le@gmail.com";

    // Doubles (higher precisions than floats(15-16 decimal points))
    double pi = 3.14159265458979;

    // Booleans (1 byte)
    bool isAtHome = true;

    // Print statements (\n for newline)
    printf("You are %d years old\n", age);
    printf("The value of pi is %.8lf\n", pi);
    printf("Your grade was %c\n", grade);
    printf("Your email is %s\n", email);

    // If statements
    if (isAtHome) {
        printf("You are at home\n");
    } else {

        printf("You aren't at home\n");
    };

    // You can use . to specify decimal points to display
    printf("You have %.1f grams left\n", grams);

    // Controlling width of displayed chars
    int num1 = 1;
    int num2 = 2;
    float num3 = -1000;

    // + sign will display when an integer is positive
    printf("You will get %+d grams\n", num1);

    // numbers before the FS can specify minimum chars to print
    printf("You have %3d grams left\n", num2);

    printf("You had exactly %.2f grams left\n", num3);

    return 0;
}
