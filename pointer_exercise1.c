#include <stdio.h>

void ptr(int i);

int main()
{
    int a = 3;
    printf("The address of variable is %u\n", &a);
    ptr(a);
    return 0;
}

void ptr(int i)
{
    printf("%d", &i);
}