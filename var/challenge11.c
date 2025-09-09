#include <stdio.h>
#include <math.h>

int main(){
int longueur, largeur, surface;

printf("entrer la longueur :");
scanf("%d", &longueur);
printf("entrer la largeur :"); 
scanf("%d", &largeur);
surface = longueur*largeur;
printf("la surface est :%d\n", surface);

 return 0;
}