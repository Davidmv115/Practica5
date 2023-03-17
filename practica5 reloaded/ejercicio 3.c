#include <stdio.h>
#include <math.h>

int main()
{
    long i, inicio, fin, fact;
    printf("Ingrese el valor inicial del rango: ");
    scanf("%ld", &inicio);
    printf("Ingrese el valor final del rango: ");
    scanf("%ld", &fin);
    printf("No     Cuadrado   Cubo    Raíz Cuadrada    Factorial\n");
    for(i = inicio; i <= fin; i++)
    {
        fact = 1;
        for(int j = 1; j <= i; j++)
        {
            fact *= j;
        }
        printf("%ld \t %ld \t %ld \t %.2f \t\t %ld\n", i, (i * i), (i * i * i), sqrt((double)i), fact);
    }
     
    return 0;
}