#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, z = 0, e;

    printf("Entrer un entier n : ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Impossible, n doit etre > ou = 1\n");
    } else {
        for (i = 1; i <= n; i++) {
            z = z + i;
        }

        e = n * (n + 1) / 2;

        printf("Somme avec boucle = %d\n", z);
        printf("Somme avec formule = %d\n", e);

        if (z == e) {
            printf("Les deux resultats sont identiques.\n");
        } else {
            printf(" Erreur de calcul \n");
        }
    }

    return 0;
} 