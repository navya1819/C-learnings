#include <stdio.h>

int main(){
    int a=1,n,i=2;
    printf("Sum of first n natural number");
    scanf("%d",&n);
    while (i<=n){
        a=a+i;
        i++;
    }
    printf("Sum is %d",a);
    return 0;
}