#include <stdio.h>
#include <string.h>

struct persone{
    char nom[50];
    char prenom[50];
    int age;
};

 int main(){
    struct persone p1;

    strcpy(p1.nom, "mourchid");
    strcpy(p1.prenom, "salma");
    p1.age = 19;

    printf("nom : %s\n", p1.nom);
    printf("prenom : %s\n", p1.prenom);
    printf("age : %d\n", p1.age);
   

     return 0;

}