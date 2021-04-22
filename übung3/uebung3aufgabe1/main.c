#include <stdio.h>
#include <stdlib.h>

int main()
{
    float groesse;
    float gewicht;
    printf("geben sie ihr gewicht und groesse ein: ");
    scanf("%f %f", &gewicht, &groesse);
    float bmi;
    bmi = (gewicht / (groesse * groesse));

    printf("\nder bmi betraegt: %f", bmi);
    if(bmi < 20){
        printf("\ndu hast untergewicht.");
    }
    else if(bmi < 25){
        printf("\ndu hast normalgewicht.");
    }
    else{
        printf("\ndu hast uebergewicht.");
    }
    return 0;
}
