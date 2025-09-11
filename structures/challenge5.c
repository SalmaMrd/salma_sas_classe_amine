#include <stdio.h>
#include <string.h>

struct livre {
char titre[50];
char auteur[50];
int annee;
};

struct livre creerlivre(char t[], char a[], int an) {
    struct livre l;
    strcpy(l.titre, t);
    strcpy(l.auteur, a);
    l.annee = an;
    return l;
}

int main(){
     struct livre monlivre;
    monlivre = creerlivre("life", "SalmaMrd", 2025);

    printf("Titre : %s\n", monlivre.titre);
    printf("Auteur : %s\n", monlivre.auteur);
    printf("Annee : %d\n", monlivre.annee);


    return 0;
}