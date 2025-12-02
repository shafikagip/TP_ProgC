#include <stdio.h>

int main() {
    char s1[50] = "Hello";
    char s2[50] = " World!";
    char s3[100];
    int i = 0, j = 0;

    while(s1[i] != '\0') i++;
    printf("Longueur de s1: %d\n", i);

    i = 0;
    while(s1[i] != '\0') { s3[i] = s1[i]; i++; }
    s3[i] = '\0';
    printf("Copie de s1: %s\n", s3);

    while(s3[j] != '\0') j++;
    i = 0;
    while(s2[i] != '\0') { s3[j++] = s2[i++]; }
    s3[j] = '\0';
    printf("Concaténation: %s\n", s3);

    return 0;
}
