#include <stdio.h>
#include <stdlib.h>


int main()
{
    system("chcp 1252");
    //auswahl der gert�nke

    int sorte, menge;
    float einzelpreis, gesamtpreis, geldeinwurf;
    printf("W�hlen Sie ihr Getr�nk aus:\n");
    printf("1) Wasser (0,50 Euro) \n");
    printf("2) Limonade (1,00 Euro)\n");
    printf("3) Bier (2,00 Euro) \n\n");
    printf("\nGeben Sie 1,2 oder 3 ein: \n");
    scanf("%d", &sorte);
    printf("\nGeben Sie die gew�nschte Menge ein: \n");
    scanf("%d", &menge);

    printf("\n\n--- Bezahlvorgang ---");

    switch(sorte){
        case 1 : einzelpreis = 0.5;break;
        case 2 : einzelpreis = 1;break;
        case 3 : einzelpreis = 2;;break;
        }
    gesamtpreis = einzelpreis * menge;

    while(gesamtpreis != 0){
        printf("\nEs fehlen noch %.2f Euro.", gesamtpreis);
        printf("\nBitte werfen Sie ein Geldst�ck ein : %.2f\n", gesamtpreis);
        scanf("%f", &geldeinwurf);
        gesamtpreis -= geldeinwurf;
    }



    printf("\n\n--- Getr�nkeausgabe ---");

    for(int i = 1; i <= menge; ++i){
        printf("\nFlasche %d von %d wurde ausgegeben.", i, menge);
    }

    printf("\n\nVielen Dank, bitte entnehmen Sie ihre Getr�nke.");

    return 0;
}
