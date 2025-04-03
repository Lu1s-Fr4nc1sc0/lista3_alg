//bibliotecas de string, e outras úteis
#include<stdio.h>

const double PI =3.1415926; //constante PI com duas casas decimais
double rad; // variável que recebera o valor do raio pelo usúario

int main(void){
    printf("o raio e: ");// msg bonitinha no inicio
    scanf("%lf",&rad); // le o raio
    double area = (rad * rad) * PI; // converte o raio em área
    printf("sua area e aproximadamente : %.8lf\n",area); // exibe a area em floats pro usúario
    return 0; // sai do querido programa
}