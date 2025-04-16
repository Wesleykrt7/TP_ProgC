// calculs.c
#include <stdio.h>

int main() {
    int num1 = 12;
    int num2 = 4;
    char op = '*'; // Modifiez ici pour tester d'autres opérateurs : '+', '-', '*', '/', '%', '&', '|', '~'

    printf("num1 = %d, num2 = %d, opérateur = '%c'\n", num1, num2, op);

    switch (op) {
        case '+':
            printf("Résultat : %d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("Résultat : %d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("Résultat : %d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Résultat : %d / %d = %d\n", num1, num2, num1 / num2);
            } else {
                printf("Erreur : division par zéro.\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                printf("Résultat : %d %% %d = %d\n", num1, num2, num1 % num2);
            } else {
                printf("Erreur : modulo par zéro.\n");
            }
            break;
        case '&':
            printf("Résultat : %d & %d = %d\n", num1, num2, num1 & num2);
            break;
        case '|':
            printf("Résultat : %d | %d = %d\n", num1, num2, num1 | num2);
            break;
        case '~':
            printf("Résultat : ~%d = %d\n", num1, ~num1);
            break;
        default:
            printf("Erreur : opérateur non reconnu.\n");
    }

    return 0;
}

