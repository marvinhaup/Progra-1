#include <stdio.h>
#include <stdlib.h>

void printInventory(char[][15]);

int main()
{
    char inventory[5][15];

    for(int i = 0; i < 5; i++){
        printf("Gegenstand %d: ", i+1);
        scanf("%14s", inventory[i]);
    }

    printInventory(inventory);

    return 0;
}

void printInventory(char arr[][15]){
    printf("**** Inhalt des Rucksacks ****\n");
    for(int i = 0;i < 5; i++){
        printf("Gegenstand %d: %s\n",i+1, arr[i]);
    }
}



