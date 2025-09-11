#include <stdio.h>
#include <string.h>

struct Produit
{
  char nom[50];
  float prix;
  int quantite;
};

int main(){

 struct Produit produits[3];

strcpy(produits[0].nom, "soda");
       produits[0].prix = 12;
       produits[0].quantite = 25;

strcpy(produits[1].nom, "biscuit");
       produits[1].prix = 5;
       produits[1].quantite = 20;

strcpy(produits[2].nom, "lait");
       produits[2].prix = 10;
       produits[2].quantite = 30;

printf("les infos des produits est :\n");
for(int i=0; i<3; i++){
    printf("Nom: %s | Prix: %.2f | Quantite: %d\n",
          produits[i].nom,
          produits[i].prix,
          produits[i].quantite);
}

    return 0;
}