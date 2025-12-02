#include <stdio.h>

int main() {
    char noms[5][20] = {"Dupont", "Martin", "Durand", "Petit", "Moreau"};
    char prenoms[5][20] = {"Marie", "Pierre", "Luc", "Sophie", "Claire"};
    char adresses[5][50] = {
        "20, Boulevard Niels Bohr",
        "22, Boulevard Niels Bohr",
        "10, Rue de Lyon",
        "5, Avenue Paris",
        "15, Rue Marseille"
    };
    float notes_prog[5] = {16.5, 14.0, 12.0, 18.0, 15.0};
    float notes_sys[5] = {12.1, 14.1, 13.5, 17.0, 16.0};

    for(int i = 0; i < 5; i++) {
        printf("Etudiant %d : %s %s\nAdresse: %s\nNote Prog: %.1f, Note Sys: %.1f\n\n",
            i+1, noms[i], prenoms[i], adresses[i], notes_prog[i], notes_sys[i]);
    }
    return 0;
}
