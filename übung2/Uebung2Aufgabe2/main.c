#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anzahltage, jahre, wochen, tage, eingabetage;

    printf("geben sie eine anzahl von tagen ein: \n");
    scanf("%d", &eingabetage);

    anzahltage = eingabetage;

    jahre = anzahltage / 365;
    anzahltage = anzahltage - (365 * jahre);
    wochen = anzahltage / 7;
    anzahltage = anzahltage - (7 * wochen);
    tage = anzahltage;

    printf("%d tage entsprechen: \n%d jahren\n%d wochen\n%d tagen", eingabetage, jahre, wochen, tage);

    return 0;
}
