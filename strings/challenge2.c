#include <stdio.h>

int main(){

    char tab[]= "salmaaa";
    int counter = 0;
    while (tab[counter] != '\0'){
        counter++;
    }
    printf("size:%d", counter);

    return 0;
}