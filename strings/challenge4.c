#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "hello";
    char b[] = "world";

    if (strcmp(a, b) == 0) {
        printf("Les chaînes sont identiques.\n");
    } else {
        printf("Les chaînes sont différentes.\n");
    }

    return 0;
}
