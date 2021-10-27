#include <stdio.h>

int main()
{
    int a = 3, b = 4, c = 5, *d;
    int *i = &a;
    int *j = &b;
    int *k = &c;
    // printf("%u\n",i);
    //i=i-1;
    printf("%u\n", i);
    printf("%u\n", j);
    printf("%u\n", k);
    *d = *i - *k;
    printf("%d\n", a);
    return 0;
}