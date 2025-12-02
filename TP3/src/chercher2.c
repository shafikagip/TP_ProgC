#include <stdio.h>

int comparer(const char* a, const char* b) {
    int i = 0;
    while(a[i] != '\0' && b[i] != '\0') {
        if(a[i] != b[i]) return 0;
        i++;
    }
    return a[i] == b[i]; 
}

int main() {
    char phrases[10][100] = {
"La lune est jolie.",
"J'aime le chocolat noir.",
"Les chats.",
    };

    char recherche[100];
    printf("Entrez la phrase a rechercher : ");
    fgets(recherche, 100, stdin);

    int found = 0;

    for(int i = 0; i < 10; i++) {
        if(comparer(phrases[i], recherche)) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Phrase trouvée\n");
    else
        printf("Phrase non trouvée\n");

    return 0;
}
