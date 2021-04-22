#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand(time(NULL));
    int geheimzahl, ratezahl, versuche;
    versuche = 1;
    geheimzahl = rand() % 50 +1;

    printf("gib eine gane zahl zwischen 1 und 50 ein");
    printf("\nrate meine zahl:");
    scanf("\n%d", &ratezahl);

    if(ratezahl < 1 || ratezahl > 50)
        exit(-1);

    while(ratezahl != geheimzahl){
        if(ratezahl < geheimzahl){
            printf("\ndeine zahl ist zu klein");
        }
        else{
            printf("\n deine zahl ist zu groß");
        }
        versuche++;
        printf("\nrate meine zahl:");
        scanf("%d", &ratezahl);
    }
    printf("\nbravo du hast meine zahl in %d versuchen gefunden", versuche);
    return 0;
}
