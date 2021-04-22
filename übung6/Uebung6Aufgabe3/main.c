#include <stdio.h>
#include <stdlib.h>

//Übung 6 Aufgabe 3

int berechne2DArraySumme(int[][5],int);

int main()
{
    int zahlen[][5] = {{1,2,3,4,5},
                        {6,7,8,9,10},
                        {11,12,13,14,15},
                        {16,17,18,19,20},
                        {21,22,23,24,25}};

    int summe = berechne2DArraySumme(zahlen,5);
    printf("Summe: %d", summe);
    return 0;
}

int berechne2DArraySumme(int arr[][5],int rows){
    int summe = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < 5; j++){
            summe += arr[i][j];
        }
    }
    return summe;
}

