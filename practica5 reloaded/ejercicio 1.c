#include <stdio.h>

int main()
{
    int limiteInf, limiteSup;
    printf("Ingrese el límite inferior del rango: ");
    scanf("%d", &limiteInf);
    printf("Ingrese el límite superior del rango: ");
    scanf("%d", &limiteSup);

    if (limiteInf % 2 != 0) {
        limiteInf++;
    }
    if (limiteSup % 2 != 0) {
        limiteSup--;
    }
    printf("Números pares de %d a %d:\n", limiteInf, limiteSup);
    for (int i = limiteInf; i <= limiteSup; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}