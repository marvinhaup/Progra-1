#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i = 0;
    while(i < 100){
        i++;
        int a = pow(i,2);
        printf("\nquadratzahl von %d ist %d", i, a);
    }

    i = 0;
    do{
        i++;
        int a = pow(i,2);
        printf("\nquadratzahl von %d ist %d", i, a);
    }while(i < 100);

    for(i = 1;i <= 100; i++){
        int a = pow(i,2);
        printf("\nquadratzahl von %d ist %d", i, a);
    }

    return 0;
}
