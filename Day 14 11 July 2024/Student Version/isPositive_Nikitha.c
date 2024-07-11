#include<stdio.h>
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d", &number);

    if(number>=0)
    {
        printf("The Number \"%d\" is Positive\n ", number);
    }
    else{
        printf("The Number \"%d\" is Negative\n", number);
    }

    // char Grade;
    // printf("Enter a character: ");
    // scanf("%c", &Grade);
}