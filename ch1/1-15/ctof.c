#include <stdio.h>

float ctof(float celcius);

main()
{
    float celcius;
    int lower, upper, step;

    lower = -20;
    upper = 150;
    step  = 10;

    printf("%3s%7s\n", "C", "F");

    celcius = lower;
    while (celcius <= upper) {
        printf("%3.0f %6.1f\n", celcius, ctof(celcius));
        celcius = celcius + step;
    }
}

float ctof(float celcius)
{
	return (celcius / (5.0 / 9.0)) + 32;
}
