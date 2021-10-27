#include <stdio.h>

void ten(int a, int *b){
    *b= 10*a;
}
int main(){
    int a=7,b;
    ten(a , &b);
    printf("%d", b);

    return 0;
}