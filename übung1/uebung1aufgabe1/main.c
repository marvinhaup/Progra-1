#include <stdio.h>
#include <stdlib.h>

int main()
{
    float groesse = 1.78;
    int gewicht;

    printf("Geben Sie ihr Gewicht ein: ");
    scanf("%d", &gewicht);
    float bmi;
    bmi = gewicht / (groesse * groesse);

    printf("Der bmi betraegt: %f", bmi);
    return 0;
}
