#include <stdio.h>
int main() {
    int c, sc, nlc, tc; // character, space count, newline count, tab count
    sc = nlc = tc = 0;  // Set all counts to 0
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++sc;
        if (c == '\n')
            ++nlc;
        if (c == '\t')
            ++tc;
    }
    printf("Spaces\t\tNLs\t\tTabs\n");
    printf("%d\t\t%d\t\t%d", sc, nlc, tc);
}
