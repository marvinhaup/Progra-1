#include <stdio.h>
#include <stdlib.h>

struct person{
    char name[25];
    int alter;
};

struct verein{
    char name[25];
    struct person mitglieder[25];
    int mitgliederanzahl;
};

struct verein mitgliedhinzufuegen(struct person, struct verein);
void printverein(struct verein);
int main()
{
    struct person1 = {"helmut",55};
    struct person2 = {"gabi",57};

    struct verein1 = {"hasenzuchtverein",{person1},1};
    verein1 = mitgliedhinzufuegen(person2,verein1);


    return 0;
}


struct verein(struct person p,struct verein v){
    if(v.mitgliederanzahl < 25 && p.alter > 50){
        v.mitglieder[v.mitgliederanzahl] = p;
        v.mitgliederanzahl ++;
    }
    return v;
};

void printverein(struct verein v){
    printf("vereininfo\n");
    printf("name %s \n", v.name);
    printf("mitgliederanzahl")



}

