#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c;
    float moyenne_geometrique;
    printf("entrer le premier nombre : ");
    scanf("%f", &a);
    printf("entrer le deuxieme nombre : ");
    scanf("%f", &b);
    printf("entrer le troisieme nombre : ");
    scanf("%f", &c);
    moyenne_geometrique = cbrt(a * b * c);
    printf("la moyenne geometrique est : %.2f\n", moyenne_geometrique);

    return 0;
}