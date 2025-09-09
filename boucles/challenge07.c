#include <stdio.h>

int main() {
    int z, inverse = 0, a;

    printf("Entrer un nombre: ");
    scanf("%d", &z);
    while (z != 0) {
        a = z % 10;
        inverse = inverse * 10 + a;
        z = z / 10; 
        }

    printf("Nombre inverse = %d\n", inverse);

    return 0;
} 

