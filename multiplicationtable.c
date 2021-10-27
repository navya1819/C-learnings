#include <stdio.h>

int main()
{
    int a, i = 1;
    printf("Enter a number whose table you want ");
    scanf("%d", &a);
    while (i <= 10)
    {
        printf("%d times %d is %d\n", i, a, a*i);
        i++;
    }

    return 0;
}