#include <stdio.h>

int main() {

    int i, j;
    char c;
    int word_length = 0;
    int histo[256];
    for(i = 0; i < 256; ++i) histo[i] = 0;

    while((c = getchar()) != EOF) {
        ++histo[c];
    }

    printf("<<< Histogram start >>>\n");
    for(i = 'A'; i <= 'Z'; ++i) {
        printf("%3c: ", i);
        for(j = 0; j < histo[i]; ++j) printf("*");
        printf("\n");
    }
    for(i = 'a'; i <= 'z'; ++i) {
        printf("%3c: ", i);
        for(j = 0; j < histo[i]; ++j) printf("*");
        printf("\n");
    }
    printf("<<< Histogram end >>>\n");

    return 0;
}
