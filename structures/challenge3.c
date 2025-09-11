#include <stdio.h>

struct Rectangle{

float longu;
float large;

};
float calAir(struct Rectangle s){
    return s.longu*s.large;
}

int main(){

    struct Rectangle recs1;

    printf("entrer la longuer: ");
    scanf("%f", &recs1.longu);
    printf("entrer la larguer: ");
    scanf("%f", &recs1.large);

    printf("L'aire du rectangle est : %.2f\n", calAir(recs1));

    return 0;
}