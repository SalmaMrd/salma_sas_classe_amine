#include <stdio.h>
#include <string.h>

int main() {
    char chaine[100];

    printf("saisir une chaine:");
    fgets(chaine, 100, stdin);

    printf("la chaine est: %s", chaine);

    return 0;
}
