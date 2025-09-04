#include <stdio.h>

int main(){

    char a[]= "hallo";
    char b[]= "salmaa";
    char res[100];

    int x=0, z=0;

    while(a[x] != '\0'){
        res[x]= a[x];
        x++;
    }

    while(a[z] != '\0'){
        res[x]= a[z];
        x++;
        z++;
    }

    res[x]='\0';

    printf("%s", res);
    
    return 0;
}