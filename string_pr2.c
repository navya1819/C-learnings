#include <stdio.h>

int strlen(char *st){
    char *ptr=st;
    int i=0;
    while(*ptr != '\0'){
    i++;
    ptr++;
    }
    return i;
}

int main()
{
    char str[50];
    printf("Enter a word whose length you want to find ");
    gets(str);
    int len = strlen(str);
    printf("The length is %d", len);
    return 0;
}