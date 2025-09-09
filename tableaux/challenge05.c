

#include <stdio.h>
#include <stdlib.h>


int main(){
    int n;
    printf("enter le nombre d'elements d'un tableau : ");
    scanf("%d",&n);

    int tab[n];
    printf("entrer les elements de tableau :\n");
    int min = tab[0];

    for ( int i = 0; i < n ; i++)
    {
        scanf("%d", &tab[i]) ;
        if (min > tab[i])
        {
            min = tab[i];
        }
    }
    printf("le plus petit element dans un tableau  : %d\n", min);
    
    return 0;
}