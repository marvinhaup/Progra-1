#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int zahl1, zahl2, gewinner, differenz1, differenz2, zufallszahl;

    srand(time(NULL));
    zufallszahl = rand() % 100 + 1;
    printf("%d", zufallszahl);

    printf("\nspieler1 gib deine zahl ein: ");
    scanf("%d", &zahl1);
    printf("\nspieler2 gib deine zahl ein: ");
    scanf("%d", &zahl2);

    if(zahl1 < zufallszahl){
        differenz1 = zufallszahl - zahl1;
    }
    else if(zahl1 > zufallszahl){
        differenz1 = zahl1 - zufallszahl;
    }
    else{
        differenz1 = 0;
    }
        if(zahl2 < zufallszahl){
        differenz2 = zufallszahl - zahl2;
    }
    else if(zahl2 > zufallszahl){
        differenz2 = zahl2 - zufallszahl;
    }
    else{
        differenz2 = 0;
    }

    if(differenz1 == differenz2){
        gewinner = 0;
    }
    else if(differenz1 < differenz2){
        gewinner = 1;
    }
    else{
        gewinner = 2;
    }

    switch(gewinner){
        case 0 : printf("\nes gibt keinen gewinner");break;
        case 1 : printf("\nspieler %d hat gewonnen, er ist nur %d von der zufallszahl %d entfernt", gewinner, differenz1, zufallszahl);break;
        case 2 : printf("\nspieler %d hat gewonnen, er ist nur %d von der zufallszahl %d entfernt", gewinner, differenz2, zufallszahl);break;
        }

    return 0;
}
