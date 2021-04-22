#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int wuerfeln6(int);

int main()
{
    srand(time(NULL));
    int wuerfe;
    printf("\nwie oft soll gewuerfelt werden: ");
    scanf("%d", &wuerfe);
    wuerfeln6(wuerfe);

    return 0;
}

int wuerfeln6(int anzahl){
    for(int i = 0; i < anzahl; i++){
        int wurf = rand() % 6 + 1;
        int j = i + 1;
        printf("\n%d. wurf: %d", j, wurf);
        }
    }
