#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int a, b, somme;

    printf("entrer 2 entiers : ");
    scanf("%d%d", &a,&b);

    if (a!=b) {
        printf("%d + %d = %d", a, b, a+b);
    } 
    
    printf("%d + %d = %d\n", a, b, a+b);
    somme = a+b;
    printf("%d*3 = %d", somme, somme*3);
    
    return 0;
}