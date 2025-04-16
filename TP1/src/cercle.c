#include <stdio.h>
#define PI 3.14159265358979323846

int main() {
    double rayon, aire, perimetre;

    // Demande à l'utilisateur de saisir le rayon
    printf("Entrez le rayon du cercle : ");
    scanf("%lf", &rayon);

    // Calcul de l'aire et du périmètre
    aire = PI * rayon * rayon;
    perimetre = 2 * PI * rayon;

    // Affichage des résultats
    printf("Aire du cercle : %.2f\n", aire);
    printf("Périmètre du cercle : %.2f\n", perimetre);

    return 0;
}
