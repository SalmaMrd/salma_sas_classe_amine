#include <stdio.h>
#include <math.h>  

int main() {

    float a, b, c;
    
    printf("entrer le nombre a : ");
    scanf("%f", &a);
    printf("entrer le nombre b : ");
    scanf("%f", &b);
    printf("entrer le nombre c : ");
    scanf("%f", &c);

    double delta = (b * b) - (4 * a * c);
    
    printf("delta est : %.2lf\n", delta);
    
    if (delta > 0) {
        
        double x2 = (-b - sqrt(delta)) / (2 * a);
        double x1 = (-b + sqrt(delta)) / (2 * a);
        
        printf("2 solutions réelles distinctes : x1 = %.2lf, x2 = %.2lf\n", x1, x2);
    } else if (delta == 0) {
        double x = -b / (2 * a);
        printf("une solution : x = %.2lf\n", x);
    } else {
        printf("pas de solution réelle\n");
    }

    return 0;
}