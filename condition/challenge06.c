#include <stdio.h>

int main() {
    float nombre;

    printf("entrer un nombre : ");
    scanf("%f", &nombre);

    if (nombre > 0) {
        printf("le nombre %.2f est positif.\n", nombre);
    } else if (nombre < 0) {
        printf("le nombre %.2lf est négatif.\n", nombre);
    } else {
        printf("nul\n");
    }

    return 0;
}