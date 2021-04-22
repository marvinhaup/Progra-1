#include <stdio.h>
#include <stdlib.h>

int main()
{
    char b1, b2;
    printf("geben sie buchstabe 1 und 2 ein: ");
    scanf("%c %c", &b1, &b2);
    //printf("\nder ascii-code von zeichen 1 ist: %d", b1);

    /*char b2;
    printf("\ngeben sie buchstabe 2 ein: ");
    scanf("%c", &b2);
    printf("\nder ascii-code von zeichen 2 ist: %d", b2);*/
    printf("\ndie ascii-codes der beiden zeichen sind %d und %d", b1, b2);


    -7 ? printf("A") : printf("B");
    +0 ? printf("A") : printf("B");
    +3 ? printf("A") : printf("B");




    return 0;
}
