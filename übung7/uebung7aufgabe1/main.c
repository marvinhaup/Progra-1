#include <stdio.h>
#include <stdlib.h>

struct Auto {
    char hersteller[25];
    int km;
    float verbrauch;
    float tank;
};

void printauto(struct Auto);
struct Auto createauto(char[],int,float,float);
struct Auto fahren(struct Auto, int);
struct Auto tanken(struct Auto, float);
int main()
{
    system("chcp 1252");
    struct Auto honda = createauto("Honda Civic",35000,6.5,45.0);
    printauto(honda);
    honda = fahren(honda,300);
    printauto(honda);
    honda = fahren(honda,500);
    printauto(honda);
    honda = tanken(honda, 40);
    printauto(honda);
    return 0;
};

void printauto(struct Auto c){
    printf("\n\n*** Auto ***");
    printf("\n Hersteller: %2", c.hersteller);
    printf("\n Kilometer: %d", c.km);
    printf("\n verbrauch %.2f", c.verbrauch);
    printf("\n tank: %.2f", c.tank);
};

struct Auto createauto(char arr[],int p_km,float p_verbrauch, float p_tank){;
    struct Auto neuesauto;
    strcpy(neuesauto.hersteller,arr);
    neuesauto.km = p_km;
    neuesauto.verbrauch = p_verbrauch;
    neuesauto.tank = p_tank;
    return neuesauto;
}

struct Auto fahren(struct Auto p_auto, int p_km){
    int max_km = (100 / p_auto.verbrauch) * p_auto.tank;
    if (max_km >= p_km){
        p_auto.km += p_km;
        p_auto.tank -= (p_auto.verbrauch / 100) * p_km;
    }
    else{
        p_auto.km += max_km;
        p_auto.tank = 0.0;
        printf("\ntank ist leer. du bist nur %d kilometer weit gekommen", max_km);
    }
    return p_auto;
};

struct Auto tanken(struct Auto p_auto, float liter){
    p_auto.tank += liter;
    return p_auto;
};







