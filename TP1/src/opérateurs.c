#include <stdio.h>

int main(void) {
    int a = 16;
    int b = 3;

    printf("=== Opérateurs arithmétiques ===\n");
    printf("a = %d, b = %d\n\n", a, b);

    printf("Addition (a + b) = %d\n", a + b);
    printf("Soustraction (a - b) = %d\n", a - b);
    printf("Multiplication (a * b) = %d\n", a * b);
    printf("Division entière (a / b) = %d\n", a / b);
    printf("Modulo (a %% b) = %d\n\n", a % b);

    printf("Opérateurs de comparaison \n");
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n\n", a <= b);

 
    printf(" Opérateurs logiques \n");
    printf("(a > 10) && (b < 5) : %d\n", (a > 10) && (b < 5));
    printf("(a > 10) || (b > 5) : %d\n", (a > 10) || (b > 5));
    printf("!(a == b) : %d\n", !(a == b));

    return 0;
}

