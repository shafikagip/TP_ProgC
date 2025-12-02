#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    unsigned char r, g, b, a;
} Couleur;

typedef struct {
    Couleur c;
    int count;
} CouleurComptee;

int couleurs_egales(Couleur a, Couleur b) {
    return a.r == b.r && a.g == b.g && a.b == b.b && a.a == b.a;
}

int main() {
    Couleur tab[100];
    CouleurComptee result[100];
    int distinct = 0;

    srand(time(NULL));

    for(int i = 0; i < 100; i++) {
        tab[i].r = rand() % 256;
        tab[i].g = rand() % 256;
        tab[i].b = rand() % 256;
        tab[i].a = rand() % 256;
    }

    for(int i = 0; i < 100; i++) {
        int found = 0;

        for(int j = 0; j < distinct; j++) {
            if(couleurs_egales(tab[i], result[j].c)) {
                result[j].count++;
                found = 1;
                break;
            }
        }

        if(!found) {
            result[distinct].c = tab[i];
            result[distinct].count = 1;
            distinct++;
        }
    }

    for(int i = 0; i < distinct; i++) {
        printf("%02x %02x %02x %02x : %d\n",
            result[i].c.r, result[i].c.g, result[i].c.b, result[i].c.a,
            result[i].count);
    }

    return 0;
}
