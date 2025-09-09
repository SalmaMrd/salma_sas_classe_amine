#include <stdio.h>

int somme(int a, int b) {
    return a + b;
}

int main() {
int a, b;
printf("ntrer 2 entiers: \n");
scanf("%d%d", &a,&b);
printf("resultat= %d\n", somme(a,b));


return 0;
}