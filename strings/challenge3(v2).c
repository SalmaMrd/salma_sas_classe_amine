#include <stdio.h>
#include <string.h>

int main(){

    char a[]= "hello";
    char b[]= "salmaa";

    strcat(a, b);

    printf("%s", a);

    return 0;
}