#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tag, monat, jahr;
    printf("bitte geben sie ihr geburtsdatum ein [tt.mm.jjjj]");
    scanf("%d.%d.%d", &tag, &monat, &jahr);
    printf("\nihr internationales geburtsdatum : %d-%d-%d", jahr, monat, tag);

    return 0;
}
