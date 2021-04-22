#include <stdio.h>
#include <stdlib.h>

//Übung 6 Aufgabe 2
int berechneSkalarProdukt(int[],int[]);

int main()
{
    int vektor1[] = {1,2,3};
    int vektor2[] = {4,5,6};

    int skalarprodukt = berechneSkalarProdukt(vektor1,vektor2);

    printf("Skalarprodukt: %d", skalarprodukt);

    return 0;
}

int berechneSkalarProdukt(int v1[],int v2[]){
    int ergebnis = 0;
    for(int i = 0; i < 3; i++){
        ergebnis += v1[i] * v2[i];
    }
    return ergebnis;
}
