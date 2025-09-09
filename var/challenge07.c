#include <stdio.h>
int main(){

  float a, b, c, moyenne;
  printf("entrer le premiere nombre (coefficient 2):\n");
  scanf("%f", &a);
  printf("entrer le deuxieme nombre (coefficient 3):\n");
  scanf("%f", &b);
  printf("entrer le troisieme nombre (coefficient 5):\n");
  scanf("%f", &c);
  moyenne =(a*2 + b*3 + c*5)/(2+3+5);
  printf("la moyenne est : %.2f\n", moyenne);

   return 0;
}