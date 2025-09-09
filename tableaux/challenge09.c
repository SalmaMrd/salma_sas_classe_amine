

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

    printf("Tableau entre :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }

    printf("\nTableau inverse :\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", tab[i]);
    }

    printf("\n");
    return 0;
}