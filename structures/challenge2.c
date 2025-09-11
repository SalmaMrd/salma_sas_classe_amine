#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[50];
    char prenom[50];
    int notes[5];
};
int main() {
    struct Etudiant e1;

    printf("Entrez le nom : ");
    scanf("%s", e1.nom);

    printf("Entrez le prenom : ");
    scanf("%s", e1.prenom);

    for (int i = 0; i < 5; i++) {
        printf("Entrez la note %d : ", i+1);
        scanf("%d", &e1.notes[i]);
    }
    printf("votre Nom est   : %s\n", e1.nom);
    printf("votre Prenom est : %s\n", e1.prenom);
    printf("votre Notes est  : ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", e1.notes[i]);
    }
    printf("\n");

    return 0;

}