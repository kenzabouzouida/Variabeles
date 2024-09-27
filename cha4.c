// Online C compiler to run C program online

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Kmh,ms;

    printf(" la vitesse en kilomètres par heure :\n");
    scanf("%f",&Kmh);



   ms = Kmh *  0.27778;



   printf("la vitesse en métre par seconde:%.2f",ms);


   return 0;
}