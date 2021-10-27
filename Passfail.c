#include <stdio.h>

int main(){
    int math;
    int phy;
    int chem;
    int total,a;
    printf ("Enter your maths marks");
    scanf ("%d", &math);
    printf("Enter your physics marks");
    scanf ("%d",&phy);
    printf("Enter your chemistry marks");
    scanf ("%d", &chem);
    total = chem + phy+ math;
    if (phy<=33 || chem<=33 || math<=33 || total<120){
        printf ("You failed");
    }
    else  
        {
            printf ("You passed the exam\n");
        
        }
    printf("Hit any key and press enter to exit\n");
    scanf("%d",&a);   
    
   
    return 0;
}