#include <stdio.h>
#include <stdlib.h>

int printlebenspunkte(int);
int lebenspunkteeinlesen(int,int);
int direkterschaden(int,int);
int giftschaden(int,int,int);

int main()
{
    int lebenspunkte = lebenspunkteeinlesen(10,50);

    printlebenspunkte(lebenspunkte);

    lebenspunkte = direkterschaden(lebenspunkte,10);

    lebenspunkte = giftschaden(lebenspunkte,5,3);

    printlebenspunkte(lebenspunkte);

    return 0;
}

int printlebenspunkte(int punkte){
    printf("\nlebenspunkte des helden: %d", punkte);
    }

int lebenspunkteeinlesen(int min, int max){
    int punkte;
    do{
        printf("\nlebenspunkte eingeben <%d - %d>", min, max);
        scanf("%d", &punkte);
    }while(punkte < min || punkte > max);
    return punkte;
    }

int direkterschaden(int punkte,int dmg){
    punkte -= dmg;
    printf("\nlebenspunkte nach direktem schaden: %d", punkte);
    return punkte;
    }

int giftschaden(int punkte, int dmg, int sec){
    for(int i = 0; i < sec; i++){
        punkte -= dmg;
        int dauer = 3 - i;
        printf("\nlebenspunkte nach giftschaden (%ds): %d", dauer, punkte);
        }
    return punkte;
    }
