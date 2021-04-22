#include <stdio.h>
#include <stdlib.h>

int eingabeint(int, int);

int main()
{
    int eingabe = eingabeint(1,5);
    printf("\n\ndu hast eingegeben: %d", eingabe);
    return 0;
}

int eingabeint(int min, int max){
    int eingabe;
    printf("\ngib eine zahl ein(%d-%d): ", min, max);
    scanf("%d", &eingabe);
    while(eingabe < min || eingabe > max){
        printf("\nfalsche eingabe!\ndie zahl muss zwischen %d und %d liegen.\ngib eine zahl ein (%d-%d): ", min, max, min, max);
        scanf("%d", &eingabe);
        }
    return eingabe;
    }
