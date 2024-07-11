#include<stdio.h>
int main()
{
    int Positive, Negative;
    printf("Enter The Number=");
    scanf("%d", &Positive,&Negative);

    if (Positive)
    {
    printf("The Negative No. is \"-1\"");
    }
    else
    {
        printf("The Positive no. is \"1\"");
    }
 return 0;
}