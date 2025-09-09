#include <stdio.h>

int main(){
    int n;

    printf("entrer un entier a chiffres :");
    scanf("%d", &n);

    int d1 = n % 10;
    int d2 = (n / 10) % 10;
    int d3 = (n / 100) % 10;
    int d4 = n / 1000;

    printf("l'inverse est : %d%d%d%d\n", d1, d2, d3, d4);

    return 0;
}