#include <stdio.h>
#include <stdlib.h>

int main()
{
    int monat;
    printf("geben sie monatsnummer ein:");
    scanf("%d", &monat);

    switch(monat){

        case 3 :
        case 4 :
        case 5 : printf("\nes ist frueling"); break;
        case 6 :
        case 7 :
        case 8 : printf("\nes ist sommer"); break;
        case 9 :
        case 10 :
        case 11 : printf("\nes ist herbst"); break;
        case 12 :
        case 1 :
        case 2 : printf("\nes ist winter"); break;

    }

    return 0;
}
