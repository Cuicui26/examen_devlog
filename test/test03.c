#include "../lib/liste-c.h"
#include <stdio.h>
#include "../lib/liste-c.h"

// Fonction pour afficher la liste
void affiche(ListeC liste) {
    int taille = sizeLC(liste);
    for (int i = 0; i < taille; i++) {
        printf("%d ", getLC(liste, i));
    }
    printf("\n");
}

int main() {
    ListeC Liste = createLC();

    addLC(Liste, 32);
    addLC(Liste, 24);
    addLC(Liste, 5);
    addLC(Liste, 7);

    replaceLC(Liste, -15, 1);
    affiche(Liste);

    insertLC(Liste, 0, 2);
    insertLC(Liste, 64, 1);
    affiche(Liste);

    removeLC(Liste, 3);
    affiche(Liste);

    return 0;
}