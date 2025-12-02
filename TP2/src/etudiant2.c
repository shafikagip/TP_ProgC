#include <stdio.h>
#include <string.h>

struct Etudiant {
char nom[20];
char prenom[20];
char adresse[50];
float note_prog;
float note_sys;
};

int main() {
struct Etudiant etudiants[5];

```
strcpy(etudiants[0].nom, "Lemoine");
strcpy(etudiants[0].prenom, "Alice");
strcpy(etudiants[0].adresse, "12, Rue Victor Hugo");
etudiants[0].note_prog = 17.0; etudiants[0].note_sys = 15.5;

strcpy(etudiants[1].nom, "Bernard");
strcpy(etudiants[1].prenom, "Julien");
strcpy(etudiants[1].adresse, "8, Avenue de la République");
etudiants[1].note_prog = 13.5; etudiants[1].note_sys = 14.0;

strcpy(etudiants[2].nom, "Roux");
strcpy(etudiants[2].prenom, "Emma");
strcpy(etudiants[2].adresse, "30, Boulevard Saint-Michel");
etudiants[2].note_prog = 16.0; etudiants[2].note_sys = 16.5;

strcpy(etudiants[3].nom, "Faure");
strcpy(etudiants[3].prenom, "Maxime");
strcpy(etudiants[3].adresse, "5, Rue Lafayette");
etudiants[3].note_prog = 14.5; etudiants[3].note_sys = 13.0;

strcpy(etudiants[4].nom, "Garnier");
strcpy(etudiants[4].prenom, "Léa");
strcpy(etudiants[4].adresse, "18, Rue de la Paix");
etudiants[4].note_prog = 15.5; etudiants[4].note_sys = 17.0;

for(int i = 0; i < 5; i++)
    printf("Etudiant %d : %s %s\nAdresse: %s\nNote Prog: %.1f, Note Sys: %.1f\n\n",
        i+1, etudiants[i].nom, etudiants[i].prenom, etudiants[i].adresse,
        etudiants[i].note_prog, etudiants[i].note_sys);

return 0;
```

}
