#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num,g,ng=0,a;
    srand(time(0));
    num = rand() % 100 + 1;
    printf("**********GUESS THE NUMBER GAME************\n");
    do{
        printf("Guess the number between 1-100 --->  ");
        scanf("%d",&g);
        if (g>num){
            printf("Your number is greater than the number\n");
        }
            else if(g<num){
        printf("Your number is lesser than the number\n");   
            
        }
        else if(g=num){
            printf("Your guess is right\n");
        }
        ng++;

    }while(g!=num);
    printf("Number of guess required to get the correct value is %d\n",ng);
    printf("Hit any key and then enter to exit");
    scanf("%d");

    return 0;
}