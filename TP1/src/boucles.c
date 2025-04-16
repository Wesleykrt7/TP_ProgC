// boucles.c
#include <stdio.h>

int main() {
    int compteur = 7; // Valeur inférieure à 10

    if (compteur >= 10) {
        printf("Erreur : compteur doit être strictement inférieur à 10.\n");
        return 1;
    }

    printf("Triangle rectangle de hauteur %d :\n\n", compteur);

    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
