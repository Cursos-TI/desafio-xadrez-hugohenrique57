#include <stdio.h>


int main() {
   
    //torre = 5 casas linha reta   bispo= 5 casas diagonal direita   rainha = casas qualquer direçao
    int torre, bispo = 1, rainha = 1, cavalo = 1;


//cavalo
    printf("##cavalo##\n");

    while (cavalo <= 1)
    {
        int v = 1;
        for(v = 1; v <= 2; v++){
            printf("baixo\t");
        }
    printf("esquerda\n")  ;
    cavalo++;
    }

    printf("\n");    
//tore
    printf("##torre##\n");
    for(torre = 1; torre <=5; torre++){
        printf("cima\t");
    }

    printf("\n");
    //bispo
    printf("\n");
    printf("##Bispo##\n");

    do
    {
        printf ("cima, direita\t");
        bispo++;
     } while (bispo <=5);
    
     printf("\n");
//rainha
     printf("\n");
     printf("##rainha##\n");

    while (rainha <= 8)
    {
        printf("esquerda\t");
        rainha++;
    }
    
 printf("---------------------------------------------------------\n");






   return 0;
}
