// binaire.c
#include <stdio.h>

// Fonction pour afficher la représentation binaire d'un entier sur 32 bits
void afficherBinaire(int nombre) {
    printf("Décimal: %d → Binaire: ", nombre);
    int taille = sizeof(int) * 8; // généralement 32 bits
    int flag = 0;

    for (int i = taille - 1; i >= 0; i--) {
        int bit = (nombre >> i) & 1;
        if (bit == 1) flag = 1; // activer l'affichage à partir du premier 1
        if (flag) {
            printf("%d", bit);
        }
    }

    if (!flag) {
        printf("0"); // cas particulier pour 0
    }

    printf("\n");
}

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for (int i = 0; i < taille; i++) {
        afficherBinaire(nombres[i]);
    }

    return 0;
}
