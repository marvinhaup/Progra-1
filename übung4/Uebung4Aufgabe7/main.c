#include <stdio.h>
#include <stdlib.h>

int auswahlsorte();
int auswahlmenge();
float berechneeinzelpreis(int);
void bezahlen(float);
void getraenkeausgabe(int, int);
float ueberpruefegeldstueck(float);

int main()
{
    system("chcp 1252");
    float geldeinwurf;
    int sorte = auswahlsorte();
    int menge = auswahlmenge();
    float einzelpreis = berechneeinzelpreis(sorte);
    float gesamtpreis = einzelpreis * menge;
    bezahlen(gesamtpreis);

    return 0;
}

int auswahlsorte(){
    int sorte;
    printf("W�hlen Sie ihr Getr�nk aus:\n");
    printf("1) Wasser (0,50 Euro) \n");
    printf("2) Limonade (1,00 Euro)\n");
    printf("3) Bier (2,00 Euro) \n\n");
    printf("\nGeben Sie 1,2 oder 3 ein: \n");
    scanf("%d", &sorte);
    return sorte;
    }

int auswahlmenge(){
    int menge;
    printf("\nGeben Sie die gew�nschte Menge ein: \n");
    scanf("%d", &menge);
    return menge;
    }

float berechneeinzelpreis(int sorte){
    float einzelpreis;
    switch(sorte){
        case 1 : einzelpreis = 0.5;break;
        case 2 : einzelpreis = 1;break;
        case 3 : einzelpreis = 2;;break;
        }
    return einzelpreis;
}

void bezahlen(float gesamtpreis){
    printf("\n\n--- Bezahlvorgang ---");
    float geldeinwurf;
    while(gesamtpreis != 0){
    printf("\nEs fehlen noch %.2f Euro.", gesamtpreis);
    printf("\nBitte werfen Sie ein Geldst�ck ein : %.2f\n", gesamtpreis);
    scanf("%f", &geldeinwurf);
    int ergebnis = ueberpruefegeldstueck(geldeinwurf);
    if (ergebnis == 1){
        gesamtpreis -= geldeinwurf;
    }
    }
}

void getraenkeausgabe(int menge,int sorte){
    printf("\n\n--- Getr�nkeausgabe ---");
    for(int i = 1; i <= menge; ++i){
        //printf("\nFlasche %d von %d der sorte %d wurde ausgegeben.", i, menge, sorte);
    }
    printf("\n\nVielen Dank, bitte entnehmen Sie ihre Getr�nke.");
    }

float ueberpruefegeldstueck(float stueck){
    int ok = 0;
    int x = stueck * 100;
    switch(x){
        case 5   :
        case 10  :
        case 20  :
        case 50  :
        case 100 :
        case 200 : ok = 1; break;
        default: printf("\n ihr geldst�ck ist nicht gueltig");
        }
    return ok;
    }


