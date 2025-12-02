#include <stdio.h>

int main() {
    char c = 'A'; short s = 100; int i = 1000;
    long li = 10000; long long lli = 100000; float f = 3.14; double d = 6.28; long double ld = 9.42;

    char *pc = &c; short *ps = &s; int *pi = &i;
    long *pli = &li; long long *plli = &lli; float *pf = &f;
    double *pd = &d; long double *pld = &ld;

    printf("Avant manipulation:\n");
    printf("Adresse de i: %p, Valeur de i: %x\n", (void*)pi, *pi);
    printf("Adresse de f: %p, Valeur de f: %x\n", (void*)pf, *(int*)pf);

    *pi += 1;
    *pf = 1.0;

    printf("Après manipulation:\n");
    printf("Adresse de i: %p, Valeur de i: %x\n", (void*)pi, *pi);
    printf("Adresse de f: %p, Valeur de f: %x\n", (void*)pf, *(int*)pf);

    return 0;
}
