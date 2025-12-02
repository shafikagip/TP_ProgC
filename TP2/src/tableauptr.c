#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i_tab[11];
    float f_tab[11];
    srand(time(NULL));

    for(int i = 0; i < 11; i++) {
        i_tab[i] = rand()%100;
        f_tab[i] = (float)(rand()%100)/10;
    }

    for(int i = 0; i < 11; i++)
        printf("%d ", i_tab[i]);
    printf("\n");
    for(int i = 0; i < 11; i++)
        printf("%.2f ", f_tab[i]);
    printf("\n");

    for(int i = 0; i < 11; i+=2) {
        *(i_tab + i) *= 3;
        *(f_tab + i) *= 3;
    }

    for(int i = 0; i < 11; i++)
        printf("%d ", i_tab[i]);
    printf("\n");
    for(int i = 0; i < 11; i++)
        printf("%.2f ", f_tab[i]);
    printf("\n");

    return 0;
}
