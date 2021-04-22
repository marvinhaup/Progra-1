#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isarmstrong(int);

int main()
{
    for(int i = 100; i < 1000; i++){
        int ergebnis = isarmstrong(i);
        if(ergebnis == 1){
            printf("\n%d", i);
        }
    }
    return 0;
}

int isarmstrong(int zahl){
    int ergebnis, xyz;
    xyz = pow(zahl%10,3) + pow((zahl/10)%10,3) + pow((zahl/100)%10,3);
    if(zahl == xyz){
        ergebnis = 1;
       }
    else{
        ergebnis = 0;
    }
    return ergebnis;
    }
