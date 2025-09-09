
#include <stdio.h>
#include <stdlib.h>


int main(){
    int n, facteur=0, result=0 ;

    printf("enter le nombre d'elements d'un tableau : ");
    scanf("%d",&n);

    printf("enter le facteur pour multiple avec chaque d'elements du tableau : ");
    scanf("%d",&facteur);

    int tab[n];
    printf("saisir ces elements de tableau :\n");

    for ( int i = 0; i < n ; i++)
    {
        scanf("%d", &tab[i]) ;
    }

    printf("la resultat de multiple chaque element:\n");    

    for ( int i = 0; i < n ; i++)
    {
        result=facteur*tab[i] ;
        printf("%d\n",result);
    }    

    return 0;
}