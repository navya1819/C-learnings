#include <stdio.h>

int main()
{
    int c;
    printf("Give me a temperature in celcius ");
    scanf("%d", &c);
    printf("Temperature in fahrenheit is %.2f", 32 + 1.8 * c);
    return 0;
}