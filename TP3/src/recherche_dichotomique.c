#include <stdio.h>

int main() {
    int tab[100];
    for(int i = 0; i < 100; i++)
        tab[i] = i * 2;

    printf("Tableau trier :\n");
    for(int i = 0; i < 100; i++)
        printf("%d ", tab[i]);
    printf("\n");

    int x;
    printf("Entrez l'entier à chercher : ");
    scanf("%d", &x);

    int debut = 0, fin = 99;
    int found = 0;

    while(debut <= fin) {
        int mid = (debut + fin) / 2;

        if(tab[mid] == x) {
            found = 1;
            break;
        }
        else if(tab[mid] < x)
            debut = mid + 1;
        else
            fin = mid - 1;
    }

    if(found)
        printf("entier present\n");
    else
        printf("entier absent\n");

    return 0;
}
