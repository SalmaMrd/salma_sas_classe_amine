#include <stdio.h>

int main() {
    int a;
    printf("Entrer un nombre: ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        printf("%d ", 2 * i);  // صيغة رياضية: 2*i
    }

    return 0;
} 