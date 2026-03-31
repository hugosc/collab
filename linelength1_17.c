
#include <stdio.h>
#define MAXLINE 1000 // Define symbolic constant for max line length
#define MINLENGTH 80 // Minimum length for printing

int lineget(char line[], int maxline);
/* Prototyping of functions */

int main() {
    int len;
    /* Current line length */

    char line[MAXLINE]; // Array to store current input line

    /* Read lines from input, print those at least MINLENGTH chars */
    while ((len = lineget(line, MAXLINE)) >
           0) // While length of the captured line is more than zero
        if (len >= MINLENGTH)   // If line is at least MINLENGTH chars
            printf("%s", line); // Print the line
    return 0;
}

/* Read a line into store, return length */
int lineget(char store[], int lim) { // Takes an array of characters and a limit
    int c, i;

    /* Set i to zero, if i is less than the limit -1 AND end of file not reached
     * AND it isn't a newline, increment i */
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        store[i] = c;
    if (c == '\n') { // If the detected char is a newline, store it
        store[i++] = c;
    }
    store[i] = '\0'; // Null-terminate the string
    return i;
}
