// conditions.c
#include <stdio.h>

int main() {
    int somme = 0;

    for (int i = 1; i <= 1000; i++) {
        if (i % 11 == 0) {
            continue; // Sauter les multiples de 11
        }

        if (i % 5 == 0 || i % 7 == 0) {
            somme += i;
        }

        if (somme > 5000) {
            break; // Arrêter la boucle si la somme dépasse 5000
        }
    }

    printf("La somme finale est : %d\n", somme);

    return 0;
}
