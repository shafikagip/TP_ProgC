#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tab[100];
    srand(time(NULL));

    for(int i = 0; i < 100; i++)
        tab[i] = rand() % 1000;

    printf("Tableau :\n");
    for(int i = 0; i < 100; i++)
        printf("%d ", tab[i]);
    printf("\n");

    int x, found = 0;
    printf("Entrez l'entie que vous souhaitez chercher : ");
    scanf("%d", &x);

    for(int i = 0; i < 100; i++) {
        if(tab[i] == x) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Résultat : entier present\n");
    else
        printf("Résultat : entier absent\n");

    return 0;
}
