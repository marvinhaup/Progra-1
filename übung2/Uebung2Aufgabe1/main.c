#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radius, umfang, flaeche;
    printf("geben sie einen radius ein: ");
    scanf("%f", &radius);
    float pi = 3.14159;
    umfang = 2 * pi * radius;
    flaeche = pi * radius * radius;
    printf("\nder umfang betraegt: %.2f", umfang);
    printf("\ndie flaeche betraegt: %.2f", flaeche);
    return 0;
}
