#include <stdio.h>
#include <stdlib.h>

int arraysumme(int[],int);

int main()
{
    int summe;
    int meinvektor[5] = {5,10,20,30,40};
    summe = arraysumme(meinvektor,5);
    printf("summe = %d", summe);
}

int arraysumme(int summe[], int laenge){
    int i;
    int ergebnis = 0;
    for(i = 0; i < laenge; i++){
        ergebnis += summe[i];
    }
    return ergebnis;
}
