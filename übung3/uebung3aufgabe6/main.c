#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i = 0; i < 6; i++){
        for(int j = 6; j > i; j--){
            printf(" ");
        }

        printf("*");

        for(int x = 0; x < i; x++){
            printf("*");
            printf("*");
        }
        printf("\n");
    }
    for(int i = 0; i < 3 ; i++){
        for(int j = 0; j < 5; j++){
            printf(" ");
        }
        for(int j = 0; j < 3; j++){
        printf("*");

    }
    printf("\n");
    }

    return 0;
}
