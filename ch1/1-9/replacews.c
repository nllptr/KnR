#include <stdio.h>

int main()
{
    int c, prev_c = -1;

    while((c = getchar()) != EOF) {
        if(c == ' ') {
            if(prev_c != ' ') {
                putchar(' ');
                prev_c = ' ';
            }
        } else {
            putchar(c);
            prev_c = c;
        }
    }

    putchar('\n');
    return 0;
}
