#include <stdio.h>
#include <stdlib.h>
//#include
//uebung7aufgabe3 4


struct gegenstand{
    char name[16];
    int gold;
    int gewicht;
};

struct rucksack{
    int maxgewicht
    int anzahl;
    struct gegenstand inhalt[10];
};

struct gegenstand creategegenstand(char[],int,int);
struct rucksack addgegenstand(struct rucksack, struct gegenstand);
void printrucksack
int main()
{
    /*struct gegenstand holzschwert = creategegenstand("holzschwert",5,7);
    struct gegenstand vase = creategegenstand("vase",250,5);
    printf("ersterbuchstabe: %d ", vase.name[0]);
    if(vase.name[0] == '\0'){
        printf("\n ungültiger gegenstand");
    }
    */

    system("chcp 1252");
    struct gegenstand holzschwert = creategegenstand("holzschwert,5,7");
    struct gegenstand helm = creategegenstand("helm,45,2");

    struct rucksack meinrucksack = {25,{holzschwert},{helm},2};

    meinrucksack = addgegenstand(meinrucksack, holzschwert)

    return 0;
}

struct Rucksack addgegenstand(struct rucksack p_sack, struct gegenstand p_gegenstand){

    int gewicht = 0;

    for(int i = 0, i < p_sack.anzahl, i++),{
        gewicht = gewicht + p_sack.inhalt[i].gewicht;

    }

    if(gewicht + p_gegenstand.gewicht <= p_sack.maxgewicht){
        if(p_sack.anzahl <= 9){
        p_sack.inhalt[p_sack.anzahl] = p_gegenstand;
        p_sack.anzahl++;
        }
        else printf("rucksack voll");
        }
        else printf("rucksack zu schwer");
    return
};


struct gegenstand creategegenstand(char p_name[],int p_gold,int p_gewicht){
    struct gegenstand neuergegenstand;
    if(p_gold >= 0 && p_gold <=100 && p_gewicht >=0 && p_gewicht <=10){
        strcpy(neuergegenstand.name, p_name);
        neuergegenstand.gold = p_gold;
        neuergegenstand.gewicht = p_gewicht;
    }
    else{
        neuergegenstand.name = '\0';
        printf("ungültiger wert für gold und gewicht des gegenstands %s \n", p_name);
    };
    return neuergegenstand;

    /*int erlaubt = 1

    if (0 <= p_gewicht <= 10){
        erlaubt = erlaubt;
    }
    else{
        erlaubt = 0
    }
    if (0 <= ) */
}























