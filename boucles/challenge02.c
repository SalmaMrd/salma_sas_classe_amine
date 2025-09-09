#include <stdio.h>
#include <stdlib.h>

int main()
{
    int z = 1, i, n;

    printf("Entrer le point de stop : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Impossible de calculer la factorielle d'un nombre negatif.\n");
    } else if (n == 0) {
        z = 1 ;
        }
        else {
        for (i = 1; i <= n; i++) {
            z = z * i;
        }


    }
printf("%d! = %d\n", n, z);

    return 0;
}


 