#include <stdio.h>

int main(){
    int i=3;
    int *ptr=&i;
    printf("The value of address is %u\n", ptr);
    printf("The value stored in is %d\n", *ptr);

    return 0;
}