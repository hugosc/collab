#include <stdio.h>

int main() {
    int inputChar, index;
    int digitCounts[10];
    int whiteCount, otherCount;

    whiteCount = otherCount = 0;
    // Set index to 0, check if index is 9 or less, add one to index, repeat
    for (index = 0; index <= 9; ++index)
        // Every time this repeats make sure that the digitCount at each index
        // is also 0
        digitCounts[index] = 0;

    // Start reading chars so long as the char isnt the end of a file
    while ((inputChar = getchar()) != EOF) {

        // if the given character is between 0 and 9
        if (inputChar >= '0' && inputChar <= '9') {
            // Add one to the counter for the given digit
            ++digitCounts[inputChar -
                          '0']; // We subtract 0 to not change it at all while
                                // converting to numeric value
            // If we did not do this, an inputChar like 3 would map to ASCII 51
        } else if (inputChar == ' ' || inputChar == '\t' || inputChar == '\n') {
            ++whiteCount;
        } else {
            ++otherCount;
        }
    }
    printf("Digits    0 1 2 3 4 5 6 7 8 9\n");
    printf("Counts =");
    // Put index back at 'square one' once then if less than 10 increment and
    // run below, then repeat
    for (index = 0; index < 10; ++index)
        printf(" %d", digitCounts[index]);
    printf(", Whitespace Characters = %d, Other Characters = %d\n", whiteCount,
           otherCount);
    return 0;
}
