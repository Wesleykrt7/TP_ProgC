// pyramide.c
#include <stdio.h>

int main() {
    int n = 5;  // Hauteur de la pyramide
    int i, j, k;

    // Boucle sur chaque niveau de la pyramide
    for (i = 1; i <= n; i++) {
        // Affichage des espaces avant les chiffres pour centrer
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Affichage des chiffres croissants
        for (k = 1; k <= i; k++) {
            printf("%d", k);
        }

        // Affichage des chiffres décroissants
        for (k = i - 1; k >= 1; k--) {
            printf("%d", k);
        }

        // Passer à la ligne suivante après chaque niveau
        printf("\n");
    }

    printf("Génération de la pyramide terminée.\n");

    return 0;
}

