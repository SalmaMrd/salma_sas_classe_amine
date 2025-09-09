#include <stdio.h>
#include <stdlib.h>

int main(){
int n;
printf("entrer la valeur de n:");
scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", 2 * i - 1);
    }

return 0;
} 