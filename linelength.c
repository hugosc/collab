#include <stdio.h>
#define MAXLINE 1000 // Define symbolic constant

int lineget(char line[], int maxline);
void copy(char to[], char from[]);
/* Prototyping of functions */

int main() {
    int len;
    /* Current line length */

    int max;
    /* Maximum length seen so far */

    char line[MAXLINE]; // Initialise array with max size tied to constant
    /* Current input line */

    char longest[MAXLINE]; // The FINAL longest line
    max = 0;               // set currently recorded max length to zero

    while ((len = lineget(line, MAXLINE)) >
           0) // While length of the captured line is more than zero
        if (len >
            max) { // If length of current line is longer than any seen before
            max = len;           // Set the new record
            copy(longest, line); // And copy the current line into 'longest'
        }
    if (max > 0) /* There was a line */
        printf("%s", longest);
    return 0;
}

/* Read a line into store, return length */
int lineget(char store[], int lim) { // Takes an array of characters and a limit
    int c, i;

    /* Set i to zero, if i is less than the limit -1 AND end of file not reached
     * AND it isnt a newline, increment i */
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        store[i] = c;
    // If the detected char is a newline then instead store the terminator,
    // indicating end of line
    if (c == '\n') {
        store[i] = '\0';
    }
    return i;
}
/* Although copy returns nothing, we can use it on the local vars of ANOTHER
 * function, as we do in main */
void copy(char to[], char from[]) {
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
