// inclusão de libs matmáticas e etc
#define _USE_MATH_DEFINES // define o uso de constantes da libmath do c 
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


const double PI =3.14; //constante PI com duas casas decimais
float r, h,p; // inputs do usúario pra raio altura e preço
float metros_por_lata = 3.0f*5.0f;
int main(void){

    //lendo os inputs com as frases de req
    printf("o raio e: ");
    scanf("%f",&r);
    printf("a altura e: ");
    scanf("%f",&h);
    printf("o preco da lata e: ");
    scanf("%f",&p);
    float area = 2 * PI * r *(r+h); // converte a area do cilindro
    //printf("%f e a area do cilindro\n",area); //debug
    float latas_imag = area / metros_por_lata;// numero imaginario de latas a serem usadas
    float latas = ceil(area / metros_por_lata);// numero logico de latas a serem usadas convertidos pelo ceil
    float valor_final_img = latas_imag * p ; //preco imag 
    float valor_final = latas * p ; // preco real
    /*obs: é possivel definir variaveis direto de operacoes matematicas em c,
    mas em larga escala(100+) linhas isso pode tornar o codigo muito mais dificil de ler, entao nao se e o recomedado */
    
    //retorna os valores
    printf("latas imaginarias necessarias: %f\n",latas_imag);
    printf("latas realmente necessarias: %f\n",latas);
    printf("valor imaginarias necessarias: %f rs\n",valor_final_img);
    printf("valor real necessario: %f rs\n",valor_final);
    return EXIT_SUCCESS; //sai do programa
}