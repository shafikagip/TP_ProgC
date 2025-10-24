#include <stdio.h>

int main(void) {

    int a = 16;
    int b = 3;
    
    printf(" Opérateurs arithmétiques ");
    printf("a = %d, b = %d\n\n", a, b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n\n", a % b);
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("(a > 10) && (b < 5) : %d\n", (a > 10) && (b < 5));
    printf("(a > 10) || (b > 5) : %d\n", (a > 10) || (b > 5));
    printf("!(a == b) : %d\n", !(a == b));

    return 0;
}

