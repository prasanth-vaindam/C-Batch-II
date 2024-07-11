#include<stdio.h>
#define MAX 100
int main(){
    int var = 100;
    const double PI = 3.14;
    var = 200; // Variables can change. However Constants can't
    PI = 3.1456; // error: assignment of read-only variable 'PI';
    float area = PI * 4 * 4;   // use of constant value in program
    printf("area: %f\n", area);
    printf("PI: %f\n", PI);
    printf("Max: %d\n", MAX);
    // MAX = 101
    return 0;
}