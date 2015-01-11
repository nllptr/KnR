#include <stdio.h>

int main()
{
    int res = (getchar() != EOF);
    printf("getchar() != EOF is equal to %d\n", res);
    return 0;
}
