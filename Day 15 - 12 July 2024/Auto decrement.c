#include<stdio.h>
int main()
{
    int a = 10;
    int b;

    /*
    -- auto decrement
    --a; // pre-decrement
    a--; // post-decrement
    */
    // b = a--; 
    // b = a; //
    // a = a - 1; // this is decrement operation
    // printf("post: %d\n",b); // 10

    b = --a;
    // a = a - 1;
    // b = a;
    printf("post: %d\n",b); // 9

}