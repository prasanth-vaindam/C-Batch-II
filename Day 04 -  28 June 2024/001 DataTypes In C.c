#include <stdio.h>

int main() {
    // Integer variable
    int integerVar = 10;
    printf("Integer: %d\n", integerVar);

    // Float variable
    float floatVar = 3.14;
    printf("Float: %.2f\n", floatVar);

    // Double variable
    double doubleVar = 3.141592653589793;
    printf("Double: %.15lf\n", doubleVar);

    // Character variable
    char charVar = 'A';
    printf("Character: %c\n", charVar);

    // String (array of characters)
    char stringVar[] = "Hello, C!";
    printf("String: %s\n", stringVar);

    // Boolean (using _Bool)
    _Bool boolVar = 1; // 1 for true, 0 for false
    printf("Boolean: %d\n", boolVar);

    // Long integer variable
    long longIntVar = 1234567890;
    printf("Long Integer: %ld\n", longIntVar);

    // Short integer variable
    short shortIntVar = 12345;
    printf("Short Integer: %hd\n", shortIntVar);

    return 0;
}
