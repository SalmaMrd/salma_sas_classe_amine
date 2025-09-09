#include <stdio.h>
int main(){
int base, exposant;
int resultat= 1;
printf("entrer le basse :\n");
scanf("%d", &base);
printf("entrer l'expossant:\n");
scanf("%d", &exposant);
for(int i = 1; i <= exposant; i++) {
    resultat = resultat * base;
}
 printf("%d^%d = %d\n", base, exposant, resultat);


} 