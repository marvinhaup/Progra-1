#include <stdio.h>
#include <stdlib.h>

float arraySumme(float[],int);
float arrayDurchschnitt(float[],int);
float arrayMax(float[],int);

//Übung 6 Aufgabe 4
int main() {
    float umsaetze[7];
    printf("Bitte die Umsaetze der letzten Woche eingeben: \n");
    for (int i = 0; i < 7; i++) {
        printf("\n Tag %d: ", i + 1);
        scanf("%f", &umsaetze[i]);
    }

    float wochenumsatz = arraySumme(umsaetze, 7);
    float durchschnitt = arrayDurchschnitt(umsaetze, 7);
    float maxUmsatz = arrayMax(umsaetze, 7);

    printf("\nDer Wochenumsatz ist: %f", wochenumsatz);
    printf("\nDer durchschnittliche Umsatz ist: %f", durchschnitt);
    printf("\nDer höchste Umsatz ist: %f", maxUmsatz);

    printf("\n");
    return 0;
}

float arraySumme(float arr[],int len){
    float summe = 0;
    for(int i = 0; i < len; i++){
        summe += arr[i];
    }
    return summe;
}

float arrayDurchschnitt(float arr[],int len){
    return arraySumme(arr,len) / len;
}

float arrayMax(float arr[],int len){
    float max = arr[0];
    for(int i = 1; i < len; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}


