#include <stdio.h>

int main() {
    int n1,n2;

    printf("Entrez le 1er nombre: ");
    scanf("%d", & n1);
    printf("Entrez le 2eme nombre: ");
      scanf("%d", & n2);
      
    float somme = n1+ n2;
    float difference = n1- n2;
    float produit = n1 * n2;
   float quotidient=n1 / n2;
   
   
    
     printf("La somme (n1+n2) est : %.2f\n", somme);
    printf("La différence (n1- n2) est : %.2f\n", difference);
    printf("Le produit (n1 * n2) est : %.2f\n", produit);
   printf("Le quotidient (n1 / n2) est : %.2f\n", quotidient);
   
     
     return 0;
     
}


