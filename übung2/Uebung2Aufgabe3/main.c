#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{   float p, q, x1, x2, z;

    printf("geben sie p ein:");
    scanf("%f", &p);
    printf("\ngeben sie q ein:");
    scanf("%f", &q);

    float y = -(p/2);

    x1 = y;
    x2 = y;
    z = (pow((p/2),2) - q);
    z > 0 ? x1 += sqrt(z), x2 -= sqrt(z), printf("es gibt zwei loesungen %.2f und %.2f", x1, x2) : ( z == 0 ? printf("es gibt eine loesung %.2f", y) : printf("es gibt keine loesung"));

    return 0;
}
