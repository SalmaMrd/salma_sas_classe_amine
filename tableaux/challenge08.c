
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Entrer le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int tab[n], tab_copie[n];
    
    printf("Entrer les elements du tableau :\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
        tab_copie[i] = tab[i];
    }

    printf("Tableau entre :\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", tab[i]);
    }

    printf("Tableau copie :\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", tab_copie[i]);
    }

    return 0;
}