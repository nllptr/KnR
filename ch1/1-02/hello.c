#include <stdio.h>

main()
{
    printf("\c"); // Gives "unknown escape sequence".
    printf("\x"); // Gives "\x used with o following hex digits".
    printf("\f");
}
