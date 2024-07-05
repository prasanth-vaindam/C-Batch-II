#include<stdio.h>
#include <stdlib.h>
int main(){
    char name[100];
    printf("Enter your name:");
    scanf("%s", &name);
    
    int age;
    
    printf("Enter your age:");
	scanf("%d",&age);
	printf("Your Age is %d",age);
    printf("Namaste %s", name);
    float height;
    printf("enter your height");
    scanf("%f",&height);
    printf("your height is%f",height);
    
    return 0;
}
