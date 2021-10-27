#include <stdio.h>

void sumandavg(int a, int b, int *sum, int *avg)
{
    *sum = a + b;
    *avg = (float)*sum / 2;
}

int main()
{
    int a = 3, b = 4, sum;
    float avg;
    sumandavg(a, b, &sum, &avg);
    printf("sum=%d , avg=%f", sum, avg);
    return 0;
}