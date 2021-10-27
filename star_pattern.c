#include <stdio.h>

void star(int s);

int main()
{
    int n;
printf("How many lines of star do you want to print?");
scanf("%d",&n);
star(n);

    return 0;
}

void star(int s)
{
    int a;
    if (s == 1)
    {
        printf("*\n");
        return;
    }
    if (s >= 1)
    {
        star(s-1);
        for(int i=0;i<(2*s-1);i++){
            printf("*");
        }
    printf("\n");
    }

}