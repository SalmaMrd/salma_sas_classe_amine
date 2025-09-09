#include <stdio.h>

int minimum(int a, int b) {
    if (a<b)
    return a;
    else 
    return b;
}

int main() {
int a, b;
printf("ntrer 2 entiers: \n");
scanf("%d%d", &a,&b);

int mini = minimum(a, b);
printf("le minimum est %d\n", mini);
return 0;
}