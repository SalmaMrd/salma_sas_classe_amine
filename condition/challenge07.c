#include <stdio.h>

int main() {
    char c;

    printf("entrer un caractere : ");
    scanf("%c", &c);

    if (c >= 65 && c <= 90) {
        printf("%c est une lettre majuscule.\n", c);
    } else {
        printf("%c minuscule.\n", c);
    }

    return 0;
}