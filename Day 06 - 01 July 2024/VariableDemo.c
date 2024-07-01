#include<stdio.h>
main(){

    int age;
    age = 40;
    printf("age: %d\n", age);
    printf("size of %d is %d bytes", age, sizeof(age));
    printf("the address of age is %u\n", &age);
    
    char grade = 'A';
    printf("grade: %d\n", grade);
    printf("size of %c is %d bytes\n", grade, sizeof(age));
    printf("the address of grade is %u\n", &grade);
    
}
