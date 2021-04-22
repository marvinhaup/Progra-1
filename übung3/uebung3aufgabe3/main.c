#include <stdio.h>
#include <stdlib.h>

int main()
{
    int wochentag, tag, monat, jahr, h ,k;
    printf("geben sie tag, monat und jahr ein:");
    scanf("%d %d %d", &tag, &monat, &jahr);

    if(monat <=2){
        h = monat -12;
        k = jahr -1;
    }
    else{
        h = monat;
        k = jahr;
    }
    wochentag = (tag+2*h+(3*h+3)/5+k+k/4-k/100+k/400+1)%7;

    switch(wochentag){
    case 0 : printf("sonntag");break;
    case 1 : printf("montag");break;
    case 2 : printf("dienstag");break;
    case 3 : printf("mittwoch");break;
    case 4 : printf("donnerstag");break;
    case 5 : printf("freitag");break;
    case 6 : printf("samstag");break;
    }
    return 0;
}
