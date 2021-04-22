#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Vektor_2D{
    float x;
    float y;
};

struct Vektor_2D vec_multiply(struct Vektor_2D,int)
float Vektor_2D vec_length(struct Vektor_2D);
struct Vektor_2D vec_normalize(struct Vektor_2D);



int main()
{   struct Vektor_2D vek1 = {10.5,13.2};
    int skalar = 5;
    struct Vektor_2D erg = vec_multiply(vek1,Skalar);
    printf("\n Skalare Multiplikation: ");


    printf("\n Länge des Vektors: %.2f", vec_length(vek1));

    erg = vec_normalize(vek1);
    printf("\n normalisierter vektor: ")

    return 0;
}


struct Vektor_2D vec_multiply(struct Vektor_2D vec,int skalar){
    vec.x *= skalar;
    vex.y *= skalar;
    return vec;
};


float Vektor_2D vec_length(struct Vektor_2D vec){
    float erg = sqrt(pow(vec.x,2)+pow(vec.y,2));
    return vec;
};
struct Vektor_2D vec_normalize(struct Vektor_2D){
    float len = vec.length(vec);

    vec.x /= len;
    vec.y /= len;
    return vec;

};











