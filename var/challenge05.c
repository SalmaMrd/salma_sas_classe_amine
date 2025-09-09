#include <stdio.h>
int main(){

int T;

printf("entrer la valeur de T:\n");
scanf("%s", &T);
if(T<0){
    printf("solide");
}else if(T>=0 && T<100){
    printf("liquide");
}else{
    printf("gaz");
}
    return 0;
}