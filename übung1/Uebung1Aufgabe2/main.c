#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float groesse = 1.80;
    float gewicht;
    printf("geben sie ihr gewicht ein: ");
    scanf("%f", &gewicht);
    float bmi;
    bmi = (gewicht / (groesse * groesse));

    printf("\nder bmi betraegt: %f", bmi);
    return 0;
}
