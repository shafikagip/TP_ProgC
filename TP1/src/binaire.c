#include <stdio.h>

int main() {
    int n;
    int masque;

    int tests[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(tests) / sizeof(tests[0]);

    for (int t = 0; t < taille; t++) {
        n = tests[t];
        printf("%d en binaire : ", n);

        masque = 1 << 31;

        for (int i = 0; i < 32; i++) {
            if (n & masque)
                printf("1");
            else
                printf("0");

            masque >>= 1;
        }

        printf("\n");
    }

    return 0;
}
