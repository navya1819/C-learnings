#include <stdio.h>

int main()
{
    int a = 1 , n;
    printf("Enter how many natural numbers you want to print");
    scanf("%d",&n);
    while (a <= n)
    {
        printf("%d\n", a);
        a++;
    }
    return 0;
}