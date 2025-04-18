#include <stdio.h>


//recursivo para torre, usado como estrtura de repetição para fazer o movimento da torre
void recursivoTorre(int n){
    if(n > 0){
       printf("frente\t");
      recursivoTorre(n - 1);
    }
}
//recursivo rainha 8 casa para esquerda

void recursivoRainha(int r){
    if(r > 0){
        printf("esquerda\t");
     recursivoRainha(r - 1);
    }
}
//recursivo cavalo 2 casa pra cima e 1 para direita

 void resursivoCavalo(int c){
    if(c > 0){
        for(int c = 1; c <=2 ; c++)
        {
            if( c==1 ) continue;
            for( int c2 = 1; c2 <=2 && c==2; c2++) {
                printf("cima\t");
            }
         printf("Direita"); 
        }
        resursivoCavalo(c - 1);
    }
 }

 void recursivoBispo(int B){
    if(B > 0){
        int b=1, b2=1;
        do
        {
            printf("cima, ");
            do
            {
                printf("direita\t");
                b2++;
            } while (b2<=1);
    
        b++;
        } while (b <= 1);
        recursivoBispo(B - 1);
    }
 }
int main() {

    int torre = 5, rainha = 8, cavalo = 1, bispo = 5;

    printf("-- Torre --\n");
    recursivoTorre(torre);
    printf("\n\n");

    printf("-- Rainha --\n");
    recursivoRainha(rainha);
    printf("\n\n");
    
    printf("-- cavalo --\n");
    resursivoCavalo(cavalo);
    printf("\n\n");

    printf("-- bispo -- \n");
    recursivoBispo(bispo);
    printf("\n\n");

 
    //NIVEL INTERMEDIARIO | abaixo
                          
    //torre = 5 casas linha reta   bispo= 5 casas diagonal direita   rainha = casas para esquerda
/*  
    printf("-- cavalo --\n");
    for(int c = 1; c <=2 ; c++)
    {
        if( c==1 ) continue;
        for( int c2 = 1; c2 <=2 && c==2; c2++) {
            printf("cima\t");
        }
     printf("Direita\n"); 
    }


       printf("\n");
    //bispo
    printf("\n");
    printf("##Bispo##\n");
    int bispo= 1;
    do
    {
        printf ("cima, direita\t");
        bispo++;
     } while (bispo <=5);




    printf("\n");    
//tore
    printf("##torre##\n");
    for(torre = 1; torre <=5; torre++){
        printf("cima\t");
    }

    
    
     printf("\n");
//rainha
     printf("\n");
     printf("##rainha##\n");

    while (rainha <= 8)
    {
        printf("esquerda\t");
        rainha++;
    }
 */   
 printf("----------------------------------------------------------------------------------------------------------------------------------------------------------\n");






   return 0;
}
