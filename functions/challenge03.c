#include <stdio.h>

int maximum(int a, int b) {
    if (a>b)
    return a;
    else 
    return b;
}

int main() {
int a, b;
printf("ntrer 2 entiers: \n");
scanf("%d%d", &a,&b);

int max = maximum(a, b);
printf("le maximum est %d\n", max);
return 0;
}