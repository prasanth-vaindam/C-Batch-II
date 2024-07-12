#include <stdio.h>

int main() {
    int a = 5;
    int b, c;

    // Post-increment: a++ 
    // b gets the value of a before increment, then a is incremented
    b = a++;
    // Now, b = 5 and a = 6

    // Pre-increment: ++a 
    // a is incremented first, then c gets the new value of a
    c = ++a;
    // Now, c = 7 and a = 7

    printf("After post-increment, b = %d and a = %d\n", b, a); // Outputs: After post-increment, b = 5 and a = 6
    printf("After pre-increment, c = %d and a = %d\n", c, a);  // Outputs: After pre-increment, c = 7 and a = 7

    return 0;
}
