#include <stdio.h>

int main(void) {

    printf("Tailles des types de base en C (en octets) :\n\n");

    printf("char : %zu octets\n", sizeof(char));
    printf("signed char : %zu octets\n", sizeof(signed char));
    printf("unsigned char : %zu octets\n\n", sizeof(unsigned char));

    printf("int : %zu octets\n", sizeof(int));
    printf("signed int : %zu octets\n", sizeof(signed int));
    printf("unsigned int : %zu octets\n\n", sizeof(unsigned int));

    printf("short : %zu octets\n", sizeof(short));
    printf("signed short : %zu octets\n", sizeof(signed short));
    printf("unsigned short : %zu octets\n\n", sizeof(unsigned short));

    printf("long int : %zu octets\n", sizeof(long int));
    printf("signed long int : %zu octets\n", sizeof(signed long int));
    printf("unsigned long int : %zu octets\n\n", sizeof(unsigned long int));

    printf("long long int : %zu octets\n", sizeof(long long int));
    printf("signed long long int : %zu octets\n", sizeof(signed long long int));
    printf("unsigned long long int : %zu octets\n\n", sizeof(unsigned long long int));


    printf("float : %zu octets\n", sizeof(float));
    printf("double : %zu octets\n", sizeof(double));
    printf("long double : %zu octets\n", sizeof(long double));
  
      return 0;






}
