#include <stdio.h>

int main()
{
    int r, h;
    printf("Give me a radius so I can tell you the area of the circle");
    scanf("%d", &r);
    printf("area=%f\n", 3.14 * r * r);
    printf("Give height=");
    scanf("%d", &h);
    printf("Volume is%f", 3.14 * r * r * h);
    return 0;
}