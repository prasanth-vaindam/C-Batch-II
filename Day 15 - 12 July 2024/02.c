#include<stdio.h>
int main(){
    int a = 10;
    int b, c;

/*
Note: ++ is increment Operator
*/
    // b = ++a; // pre-increment
    // printf("%d\n",b);

    b = a++; // post -increment
    printf("%d\n",b);
    printf("%d\n", a);

}