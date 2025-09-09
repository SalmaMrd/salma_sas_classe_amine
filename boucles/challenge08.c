#include <stdio.h>

int main() {
    int z, e;
    int a = 0, b = 1, n;

    printf("Entrer le nombre de termes a afficher: ");
    scanf("%d", &z);

    printf("Fibonacci: ");

    for (e = 1; e <= z; e++) {
        printf("%d ", a);
        n = a + b;
        a = b;
        b = n;
    }

    return 0;
} 