#include <stdio.h>

main()
{
    float fahr, celcius;
    int lower, upper, step;

    lower = -20;
    upper = 150;
    step  = 10;

    printf("%3s%7s\n", "C", "F");

    celcius = lower;
    while (celcius <= upper) {
        fahr = (celcius / (5.0 / 9.0)) + 32.0;
        printf("%3.0f %6.1f\n", celcius, fahr);
        celcius = celcius + step;
    }
}
