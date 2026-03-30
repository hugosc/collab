#include <stdio.h>
#define IN 1
#define OUT 0
int main() {
    int c, cc, nlc, sc, wc, state;
    state = OUT; // Whether we are in or out of a 'word'
    sc = nlc = cc = wc = 0;
    while ((c = getchar()) != EOF) { // While not in end of file
        ++cc;
        if (c == ' ' || c == '\n' || c == '\t' ||
            c == '.') // If any of these we are not in a word
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++wc;
        }
    }
    printf("Chars\t\tNewlines\tWords\n", cc, nlc, wc);
    printf("%d\t\t%d\t\t%d\n", cc, nlc, wc);
}
