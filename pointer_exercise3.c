#include <stdio.h>

int main(){
    int a=3;
    int *b=&a;
    int **c=&b;
   
    printf("%u", **c);
    return 0;
}