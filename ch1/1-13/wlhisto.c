#include <stdio.h>

#define WORD_SIZE 20

int main() {

    int i, j;
    char c;
    int word_length = 0;
    int histo[WORD_SIZE];
    for(i = 0; i < WORD_SIZE; ++i) histo[i] = 0;

    while((c = getchar()) != EOF) {
        if(c == ' ' || c == '\t' || c == '\n') {
            if(word_length > 0 && word_length <= WORD_SIZE) ++histo[word_length - 1];
            word_length = 0;
        } else {
            ++word_length;
        }
    }

    printf("<<< Histogram start >>>\n");
    for(i = 0; i < WORD_SIZE; ++i) {
        printf("%3d: ", i + 1);
        for(j = 0; j < histo[i]; ++j) printf("*");
        printf("\n");
    }
    printf("<<< Histogram end >>>\n");

    return 0;
}
