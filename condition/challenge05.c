#include <stdio.h>
#include <stdlib.h>

int main() {
    int choix;
    double annee;

    printf("Entrez le nombre de lannees a convertir : ");
    scanf("%lf", &annee);

    printf("options: entrer (1-5) : \n");
    printf("1 en mois\n");
    printf("2 en jours\n");
    printf("3 en heures\n");
    printf("4 en minutes\n");
    printf("5 en secondes\n");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            printf("%.2lf année = %.2lf mois\n", annee, annee * 12);
            break;
        case 2:
            printf("%.2lf année = %.2lf jours\n", annee, annee * 365);
            break;
        case 3:
            printf("%.2lf année = %.2lf heures\n", annee, annee * 365 * 24);
            break;
        case 4:
            printf("%.2lf année = %.2lf minutes\n", annee, annee * 365 * 24 * 60);
            break;
        case 5:
            printf("%.2lf année(s) = %.2lf secondes\n", annee, annee * 365 * 24 * 60 * 60);
            break;
        default:
            printf("choisir un nombre entre 1 et 5!\n");
    }

    return 0;
}