#include<stdio.h>
int main() {
    int inputNumber, reminder, result;

    printf("Enter input Number: ");
    scanf("%d", &inputNumber);
    printf("The input number is %d\n", inputNumber );

    reminder = inputNumber % 2;

    if(reminder == 1)
    {
       printf("The Number is Odd\n");
    }else{
        printf("The Number is Even\n");
    }

    // if(reminder == 0)
    // {
    //     printf("The Number is Even\n");
    // }

}