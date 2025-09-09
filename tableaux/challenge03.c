
#include <stdio.h>
#include <stdlib.h>


int main(){
    int n , s=0 ;

    printf("enter le nombre d'elements d'un tableau : ");
    scanf("%d",&n);

    int tab[n];
    printf("enter les elements de tableau :\n");

    for ( int i = 0; i < n ; i++)
    {
        scanf("%d", &tab[i]) ;
        s+=tab[i] ;
    }
    printf("la somme de votre elements : %d\n",s);
    
    return 0;
}