#include <stdio.h>

int produit(int a, int b) {
    return a*b;
}

int main() {
int a, b;
printf("ntrer 2 entiers: \n");
scanf("%d%d", &a,&b);
printf("resultat= %d\n", produit(a,b));


return 0;
}