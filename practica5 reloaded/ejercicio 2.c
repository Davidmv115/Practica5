#include <stdio.h>

// function to check leap year
int checkLeapYear(int year)
{
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 1;
    else
        return 0;
}

int main()
{
    int añoini, añofin;

    printf("año inicial: ");
    scanf("%d", &añoini);

    printf("año final: ");
    scanf("%d", &añofin);

    printf("años bisiestos de %d a %d:\n", añoini, añofin);
    for(int i = añoini; i <= añofin; i++)
    {
        if(checkLeapYear(i))
            printf("%d\t", i);
    }
     
    return 0;
}
