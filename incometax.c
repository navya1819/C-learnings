#include <stdio.h>

int main(){
    float inc, tax;
    printf("Please give your income ");
    scanf("%f",&inc);
    if (inc<250000){
        printf("You dont have to pay income tax");
    }
    else if (inc>=250000 && inc<500000){
        tax = inc*5/100;
        printf("You have to pay income tax of Rs%.2f", tax);
    }
    else if (inc>=500000 && inc<1000000){
        tax = inc*10/100;
         printf("You have to pay income tax of Rs%.2f", tax);
    }
      
    else {
           tax = inc*30/100;
           printf("You have to pay income tax of Rs%.2f", tax);

    }     
        
    
    return 0;
}