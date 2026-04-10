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


    affiche(Liste);

    return 0;
}