#include <stdio.h>

int main()
{
    int c;
    int new_line = 0;

    while((c = getchar()) != EOF) {
        if(c == ' ' || c == '\t') {
            if(!new_line) {
                new_line = 1;
                putchar('\n');
            }
        } else {
            putchar(c);
            new_line = 0;
        }
    }

    putchar('\n');
    return 0;
}
