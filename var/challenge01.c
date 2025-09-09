#include <stdio.h>
int main(){
    char nom[20];
    char prenom[20];
    int age;
    char sexe[20];
    char email[20];

//demmande des informations

    printf("entrer votre nom: \n");
    scanf("%s", &nom);
    printf("entrer votre prenom: \n");
    scanf("%s", &prenom);
    printf("entrer votre age: \n");
    scanf("%d", &age);
    printf("entrer votre sexe: \n");
    scanf("%s", &sexe);
    printf("entrer votre email: \n");
    scanf("%s", &email);

//affichage des informations

    printf("votre nom et :%s\n", nom);
    printf("votre prenom et :%s\n", prenom);
    printf("votre age et :%d\n ", age);
    printf("votre sexe et :%s\n ", sexe);
    printf("votre email et :%s\n ", email);
    

    return 0;
}