#include <stdio.h>
#include <math.h>

int main(){

    float volume, r;
    printf("entrer le rayon :");
    scanf("%f", &r);
    volume = (4/3)*3.14159*(r*r*r);
    printf("la valeur de volume est:%.2f\n", volume);

    return 0;
}