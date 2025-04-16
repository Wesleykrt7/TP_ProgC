// variables.c
#include <stdio.h>

int main() {
    // Déclaration et affectation des variables de base

    // Caractères
    char c = 'Z';
    signed char sc = -100;
    unsigned char uc = 200;

    // Entiers courts
    short s = -32000;
    unsigned short us = 65000;

    // Entiers classiques
    int i = -123456;
    unsigned int ui = 123456U;

    // Longs
    long l = -987654L;
    unsigned long ul = 987654UL;

    // Long longs
    long long ll = -1234567890123LL;
    unsigned long long ull = 1234567890123ULL;

    // Nombres à virgule
    float f = 3.14f;
    double d = 3.1415926535;
    long double ld = 3.141592653589793238L;

    // Affichage des valeurs
    printf("Valeurs des variables de base :\n\n");

    printf("char                : %c\n", c);
    printf("signed char         : %d\n", sc);
    printf("unsigned char       : %u\n", uc);

    printf("short               : %d\n", s);
    printf("unsigned short      : %u\n", us);

    printf("int                 : %d\n", i);
    printf("unsigned int        : %u\n", ui);

    printf("long                : %ld\n", l);
    printf("unsigned long       : %lu\n", ul);

    printf("long long           : %lld\n", ll);
    printf("unsigned long long  : %llu\n", ull);

    printf("float               : %f\n", f);
    printf("double              : %lf\n", d);
    printf("long double         : %Lf\n", ld);

    return 0;
}
