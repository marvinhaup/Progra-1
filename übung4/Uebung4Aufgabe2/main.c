#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int wuerfeln(int,int);

int main()
{
    srand(time(NULL));
    int wuerfe, seiten;

    printf("\nwie oft soll gewuerfelt werden: ");
    scanf("%d", &wuerfe);
    printf("\nwie viele seiten hat der wuerfel: ");
    scanf("%d", &seiten);

    wuerfeln(wuerfe,seiten);

    return 0;
}

int wuerfeln(int anzahl, int seiten){
    for(int i = 0; i < anzahl; i++){
        int wurf = rand() % seiten + 1;
        int j = i + 1;
        printf("\n%d. wurf: %d", j, wurf);
        }
    }
