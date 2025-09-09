#include <stdio.h>

int main(){
int n, a = 0;
printf("saisir un nombre: ");
scanf("%d", &n);
if (n == 0) {
a = 1;
} else {
if (n < 0) {
n = -n;
}while (n != 0) {
n = n / 10;
 a++;
  }
    }

    printf("Nombre de chiffres = %d\n", a);

    return 0;
} 