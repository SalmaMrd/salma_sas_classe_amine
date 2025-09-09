#include <stdio.h>
int main(){

float kmh, kms;

printf("entrer la valeur en kmh :\n");
scanf("%f", &kmh);

 kms = kmh * 0.27778;
printf("la valeur en kms et :%.2f", kms);
    return 0;
}