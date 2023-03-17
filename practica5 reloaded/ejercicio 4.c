#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numerosPorGenerar, i, j, numeroAleatorio;
    srand(time(NULL));
    numerosPorGenerar = rand() % 16 + 5;
    printf("Generando %d numeros aleatorios:\n", numerosPorGenerar);
    for (i = 1; i <= numerosPorGenerar; i++) {
        numeroAleatorio = rand() % 30 + 1;
        printf("%d ", numeroAleatorio);
        for (j = 1; j <= numeroAleatorio; j++) {
            printf("$");
        }
        printf("\n");
    }

    return 0;
}