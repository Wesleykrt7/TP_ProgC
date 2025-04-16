// operateurs.c
#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // Opérateurs arithmétiques
    printf("Opérateurs arithmétiques :\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);  // division entière
    printf("a %% b = %d\n", a % b); // modulo
    printf("\n");

    // Opérateurs relationnels
    printf("Opérateurs relationnels :\n");
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);
    printf("\n");

    // Opérateurs logiques
    printf("Opérateurs logiques :\n");
    printf("a && b : %d\n", a && b);  // les deux sont non nuls
    printf("a || b : %d\n", a || b);  // au moins un est non nul
    printf("!a     : %d\n", !a);      // faux car a != 0
    printf("!b     : %d\n", !b);      // faux car b != 0
    printf("\n");

    // Opérateurs bit à bit
    printf("Opérateurs bit à bit :\n");
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);  // XOR
    printf("~a = %d\n", ~a);        // complément binaire
    printf("a << 1 = %d\n", a << 1); // décalage gauche
    printf("a >> 1 = %d\n", a >> 1); // décalage droite
    printf("\n");

    return 0;
}
