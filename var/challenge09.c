#include <stdio.h>
#include <math.h>

int main(){
float distance, x1, x2, y1, y2, z1, z2;
printf("entrer le coordonnee x1: ");
scanf("%f", &x1);
printf("entrer le coordonnee x2: ");
scanf("%f", &x2);
printf("entrer le coordonnee y1: ");
scanf("%f", &y1);
printf("entrer le coordonnee y2: ");
scanf("%f", &y2);
printf("entrer le coordonnee z1: ");
scanf("%f", &z1);
printf("entrer le coordonnee z2: ");
scanf("%f", &z2);
distance = sqrt((x2-x1) * (x2-x1) + (y2-y1) * (y2-y1) * (z2-z1) * (z2-z1));
printf("la distance entre deux points est : %.2f\n", distance);

    return 0; 
}