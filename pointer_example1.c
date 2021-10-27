#include <stdio.h>

int main(){
    int marks[3];
    int *ptr;
    ptr=&marks[0];
    for (int i=0;i<3;i++){
        printf("Enter the value of marks of student %d ",i+1);
        scanf("%d",ptr);
        ptr++;
    }
    for(int j=0;j<3;j++){
        printf("The marks of student %d is %d\n", j+1, marks[j]);
    }
    return 0;
}