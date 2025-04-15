#include <stdio.h>


int main() {
   
    //torre = 5 casas linha reta   bispo= 5 casas diagonal direita   rainha = casas qualquer direçao
    int torre, bispo = 1, rainha = 1;

//tore
    printf("##torre##\n");
    for(torre = 1; torre <=5; torre++){
        printf("cima\n");
    }


    //bispo
    printf("\n");
    printf("##Bispo##\n");

    do
    {
        printf ("cima, direita\n");
        bispo++;
     } while (bispo <=5);
    

//rainha
     printf("\n");
     printf("##rainha##\n");

    while (rainha <= 8)
    {
        printf("esquerda\n");
        rainha++;
    }
    







   return 0;
}
