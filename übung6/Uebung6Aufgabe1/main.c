#include <stdio.h>
#include <stdlib.h>

int arraysumme(int[],int);

int main()
{
    int array[] = {3,-7,23,87,3,4,3,5,67,4,3,5};
    int summe;

    //int leange = sizeof(array) / sizeof(int);
    //printf("Laenge\n", sizeof(int));

    summe = arraysumme(array,12);

    printf("Summe: %d", summe);
    return 0;
}


int arraysumme(int arr[],int len){
    int ergebnis = 0;
    int  i;
    for(i = 0; i < len; i++){
    ergebnis += arr[i];
    }
    return ergebnis;
}
