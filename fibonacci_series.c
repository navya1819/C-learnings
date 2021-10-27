#include <stdio.h>

int fib(int n);

int main()
{
    int p;
    printf("Specify which term of the series you want ");
    scanf("%d", &p);
    printf("The number is %d", fib(p));
    return 0;
}

int fib(int n)
{
    int a;
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
   else if (n >= 3)
    {
        a=fib(n - 1) + fib(n - 2);
        return a;
    }
}