

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, j, temp;

    printf("Entrer le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int tab[n];
    printf("Entrer les elements du tableau :\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }

    printf("Tableau trie en ordre croissant:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", tab[i]);
    }

    return 0;
}