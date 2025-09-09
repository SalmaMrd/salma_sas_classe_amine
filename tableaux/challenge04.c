 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Entrer le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int tab[n];
    printf("Entrer les elements du tableau :\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    int max = tab[0]; 

    for (int i = 1; i < n; i++) {
        if (max < tab[i]) {
            max = tab[i];
        }
    }

    printf("Le plus grand element dans le tableau est : %d\n", max);

    return 0;
}