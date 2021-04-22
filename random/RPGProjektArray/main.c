#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//�bung 6 Aufgabe 6

int eingabeInt();
int eingabeIntMinMax(int, int);
void printMainMenu();
void printCharacterCreationMenu();
void printCharacter(char name[], int attribute[]);
void startCharacterCreation(char[],int[]);
void inputRace(int[]);
void rollAttributes(int[]);
int wuerfel_xWy(int x, int y);
int getModifikator(int,int[]);
int getRaceTP(int);

enum attributnames {VO,ST,GE,KO,RK,TP};
enum voelker {ELF,MENSCH,ZWERG,HALBING};

int main()
{
    char name[25] = {0};
    int attribute[6] = {0};

    srand(time(NULL));

    printMainMenu();

    int eingabe = eingabeIntMinMax(1,2);
    switch(eingabe){
        case 1: startCharacterCreation(name,attribute); break;
        case 2: exit(0);
        default: exit(0);
    }
    system("cls");
    printf("Charakter erstellt.\n");
    printCharacter(name,attribute);
    scanf("%d", &eingabe);
    return 0;
}


int eingabeInt(){
    int eingabe;
    scanf("%d",&eingabe);
    return eingabe;
}

int eingabeIntMinMax(int min, int max){
    int eingabe;
    do{
        printf("\nEingabe <%d-%d>: ",min,max);
        eingabe = eingabeInt();
    }while(eingabe < min || eingabe > max);
    return eingabe;
}

void printCharacterCreationMenu(){
    system("cls");
    printf("---- Charaktererstellung ----\n");
    printf("(1) Namen vergeben\n");
    printf("(2) Volk w�hlen\n");
    printf("(3) Attribute w�rfeln\n");
    printf("(4) Erstellung abschlie�en\n");
    printf("(5) Spiel beenden\n");
}

void printCharacter(char name[], int attribute[]){

    printf("\n*** Aktuelle Charakterwert ***");
    printf("\nName: \t\t%s",name);
    printf("\nVolk: \t\t%d",attribute[VO]);
    printf("\nSt�rke: \t%d (%d)",attribute[ST],getModifikator(ST,attribute));
    printf("\nGeschick: \t%d (%d)",attribute[GE],getModifikator(GE,attribute));
    printf("\nKonstitution: \t%d (%d)",attribute[KO],getModifikator(KO,attribute));
    printf("\nR�stung: \t%d",attribute[RK]);
    printf("\nTrefferpunkte: \t%d",attribute[TP]);
    printf("\n******************************");
}

void startCharacterCreation(char name[],int attribute[]){
    int eingabe;
    do{
        printCharacterCreationMenu();
        printCharacter(name,attribute);
        eingabe = eingabeIntMinMax(1,5);
        switch(eingabe){
            case 1: inputCharName(name); break;
            case 2: inputRace(attribute); break;
            case 3: rollAttributes(attribute);break;
            case 5: exit(0);
        }
    }while(eingabe != 4);
}

void inputCharName(char c[]){
    printf("\nName deines Characters eingeben: ");
    scanf("%25s", c);
}

void printMainMenu(){
    system("chcp 1252");
    system("cls");
    printf("--------- Hauptmen� ---------\n");
    printf("(1) Neuen Charakter erstellen\n");
    printf("(2) Spiel beenden\n");
}

void printRaceMenu(){
    //system("cls");
    printf("--------- Volk w�hlen ---------\n");
    printf("(1) Mensch\n");
    printf("(2) Zwerg\n");
    printf("(3) Elf\n");
    printf("(4) Halbling\n");
}

void inputRace(int attribute[]){
    printRaceMenu();
    attribute[VO] = eingabeIntMinMax(1,4);
}

void rollAttributes(int attribute[]){
    system("cls");
    printf("--------- Attribute ausw�rfeln ---------\n");
    int wuerfe[3];
    for(int i = 0; i < 3; i++){
        wuerfe[i] = wuerfel_xWy(3,6);
    }
    for(int i = 0; i < 3; i++){
        printf("\n%d. Wurf: %d", i+1, wuerfe[i]);
    }
    int eingabe;
    printf("\n\nWelcher Wurf soll der St�rke zugeordnet werden: ");
    eingabe = eingabeIntMinMax(1,3);
    attribute[ST] = wuerfe[eingabe-1];

    printf("Welcher Wurf soll der Geschicklichkeit zugeordnet werden: ");
    eingabe = eingabeIntMinMax(1,3);
    attribute[GE] = wuerfe[eingabe-1];

    printf("Welcher Wurf soll der Konstitution zugeordnet werden: ");
    eingabe = eingabeIntMinMax(1,3);
    attribute[KO] = wuerfe[eingabe-1];

    attribute[RK] = 10 + getModifikator(GE,attribute);
    attribute[TP] = getRaceTP(attribute[VO]) + getModifikator(KO,attribute);
}

int wuerfel_xWy(int x, int y){
    int summe = 0;
    printf("\nWurf %dW%d: ",x,y);
    for(int i = 0; i < x; i++){
        int wurf = rand() % y + 1;
        printf("\n\t%d. Wurf: %d", i+1,wurf);
        summe += wurf;
    }
    printf("\n\tErgebnis: %d", summe);
    return summe;
}

int getModifikator(int mod,int att[]){
    return (att[mod] - 10) / 2;
}

int getRaceTP(int race){
    switch(race){
        case MENSCH: return 8;
        case ZWERG: return 10;
        case ELF:
        case HALBING: return 6;
    }
}
