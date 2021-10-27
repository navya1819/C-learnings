#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, n5, n6, n7;
    printf("Give your first number");
    scanf("%d", &n1);
    printf("Give your second number");
    scanf("%d", &n2);
    printf("Give your third number");
    scanf("%d", &n3);
    printf("Give your fourth number");
    scanf("%d", &n4);
    if (n1 > n2){
        n5=n1;
    }
    else n5=n2;
    if (n5>n3) n6=n5;
    else n6=n3;
    if (n6>n4) n7=n6;
    else n7=n4;
    printf("Greatest number is %d", n7);
    return 0;
}