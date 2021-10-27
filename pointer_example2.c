#include <stdio.h>

void print(int *ptr, int n){
    for (int i=0;i<n;i++){
        printf("The value is %dth element is %d\n",i+1,*(ptr+i));
    }
}
int main(){
    int arr[]={23,567,345,6,86,366,368,223};
    print(arr,8);
    return 0;
}