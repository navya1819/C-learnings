#include <stdio.h>

int main(){
    int arr[10], a=0,i=0,n;
    printf("Enter a number whose table you want");
    scanf("%d",&n);
    while(a<10){
        arr[i]=(a+1)*n;
        printf("%d times %d is %d\n" ,a+1,n, arr[i]);
        a++;
    }

    return 0;
}