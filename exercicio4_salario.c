// importação das bibçiotecas
#include <stdio.h>
#include <stdlib.h>

// variaveis "quebradas" a serem lidas no programa
float hora_trabalhada,hora_extra,hora_ausente,salario_base;

int main(void){
    //scan do user input
    printf("horas trabalhadas: ");
    scanf("%f",&hora_trabalhada);
    printf("horas extras: ");
    scanf("%f",&hora_extra);
    printf("horas ausente: ");
    scanf("%f",&hora_ausente);
    printf("salario base: ");
    scanf("%f",&salario_base);

    float valor_hora = (salario_base/100.0f) * 4; //calcula a porcentagem do valor hora tabalhado
    /*equação terrivelmente mal codada do valor do salario*/
    float valor_final = (valor_hora * hora_trabalhada) - (valor_hora * hora_ausente) + ((valor_hora * 1.5f) * hora_extra);
    float salario_final = (valor_final - ((valor_final/100.f)*11.0f)); // remove o inss
    printf("salario_final: %f rs \n",salario_final); // output do salario
    return EXIT_SUCCESS; // sai do programa
}