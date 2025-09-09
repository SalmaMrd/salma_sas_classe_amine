#include <stdio.h>
int main(){

    float a, b,add,sou,mul,div;
    printf("entre 2 deferent nombres:\n ");
    scanf("%f %f", &a, &b);
    add=a+b;
    sou=a-b;
    mul=a*b;
    div=a/b;
    //callculation 
    printf("l'Addition et :%.2f\n" , add);
    printf("la Soustraction et : %.2f \n",sou);
    printf("la Multiplication et : %.2f \n",mul);
    printf("Division et :%.2f \n", div);


return 0;
}