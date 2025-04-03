// incluindo as bibliotecas de costume + math(para usarmos sqrt() e pow)
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// posição dos pontos + a distancia (sou preguiçoso demais pra fazer structs hahaha)
float ax,ay,bx,by,dist;

int main(void){
    // lendo os dois pontos do input do usuario
    printf("ax: ");
    scanf("%f",&ax);
    printf("ay: ");
    scanf("%f",&ay);
    printf("bx: ");
    scanf("%f",&bx);
    printf("ax: ");
    scanf("%f",&by);
    //calculando a distancia
    dist = sqrtf(pow(bx-ax,2)+pow(by-ay,2)); //aq pow é exponenciação e sqrt e raiz quadrada
    printf("a distancia e: %f\n",dist); // exibe a distancia pro usuario
    return EXIT_SUCCESS; // sai do programa
}

