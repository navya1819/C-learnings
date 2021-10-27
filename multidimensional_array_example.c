#include <stdio.h>

int main(){
    int marks[5][3];
    int stu = 5, sub=3;
    for(int i=0;i<stu;i++){
        for(int j=0;j<sub;j++){
            printf("Enter marks of student %d in subject %d ", i+1 , j+1);
            scanf("%d",&marks[i][j]);
        }
    }
     for(int i=0;i<stu;i++){
        for(int j=0;j<sub;j++){
            printf("Marks of student %d in subject %d is %d\n", i+1 , j+1, marks[i][j]);
        }
    }
    
    return 0;
}