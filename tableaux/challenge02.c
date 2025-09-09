
#include <stdio.h>
#include <stdlib.h>


int main(){
    int n;

    printf("enter le nombre d'elements d'un tableau :\n ");
    scanf("%d",&n);

    int tab[n];
    printf("entre les elements de tableau :\n");

    for ( int i = 0; i < n ; i++)
    {
        scanf("%d", &tab[i]) ;
    }

    printf("les elements de votre tableau sont :\n");

    for ( int i = 0; i < n ; i++)
    {
        printf("%d\n", tab[i]);
    }
    
    return 0;
}