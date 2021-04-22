#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int berechnepotenz(int,int);

int main()
{
    int x, y, ergebnis;
    printf("welche potenz soll berechnet werden (x^y):");
    scanf("%d %d", &x, &y);
    ergebnis = berechnepotenz(x,y);
    printf("\n%d^%d = %d", x, y, ergebnis);

    return 0;
}

int berechnepotenz(int basis,int exponent){
    int ergebnis = pow(basis,exponent);
    return ergebnis;
    }
