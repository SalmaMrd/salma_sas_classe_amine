#include <stdio.h>


long long factorielle(int n) {
    if (n == 0 || n == 1)   
    return 1;
    else
    return n * factorielle(n - 1);  
}
int main (){
int x;
    printf("Entrer un entier: ");
    scanf("%d", &x);

    printf("Factorielle(%d) = %lld\n", x, factorielle(x));


    return 0;
    
}