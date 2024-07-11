/*
Decimal: 0, -9, 22 etc
Octal: 021, 077, 033 etc
Hexadecimal: 0x7f, 0x2a, 0x521 etc
E-5 = 10-5
*/
#include <stdio.h>
int main(){
    printf("Integer Literals: ");
    printf("decimal 10: %d\n", 10); // 10
    printf("binary 0b10: %d\n", 0b10); // 2
    printf("ocatl 010: %d\n", 010);// 8
    printf("ocatl 010: %2d\n", 011);// 9 here 2d is for 2 spaces occupied for displaying the vlaue
    printf("hexadecimal 0x10: %d\n", 0x10);//16
    printf("hexadecimal 0x10: %d\n", 0xFF);//255
    printf("Float Literals: ");
    /*
        -2.0
        0.0000234
        -0.22E-5  = 0.22 * 10^-5 = .0000022 
        .2E5 = .2 * 10^5 = 20000.0
    */
    printf("-2.0 is %f\n",-2.0);
    printf("0.0000234 is %f\n", 0.0000234);
    printf("-0.22E-5 is %f\n", -0.22E-5);
    printf("-0.22E-5 is %.7f\n", -0.22E-5); // .7f gives upto 7 digit precesion 
    printf("0.2E5 is %10.17f\n", 0.2E5);
    
    
    printf("Character Literals: ");
    printf("%c\n", 'a');
    printf("%c\n", 'F');
    printf("%c\n", '2');
    printf("%c\n", '}');

    return 0;
}