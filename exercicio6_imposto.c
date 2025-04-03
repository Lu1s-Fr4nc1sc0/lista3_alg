// bibliotecas padrões de c
#include <stdio.h>
#include <stdlib.h>

//variaveis do programa
float valor_montadora,valor_final,lucro,ipi,icm ;
/*Observação interessante, em lua(primeira linguagem que tive contato),
onde são declarados variaveis globais automaticamente, em c e nas demais linguagens
as variaveis são locais, podendo ter o mesmo nome em diversas funções que serão chamadas depois
contato que não estejam uma dentro da outra*/

/* Definido uma função do tipo float que retornara apenas o valor 
da porcentagem em reais dos elementos agregados ao custo do carro */

float get_from_percent(float enter, float per_cent) {
    enter = (enter/100) * per_cent;
    return enter;
}

int main(void){
    // lendo o buffer do usuario
    printf("preco da montadora: ");
    scanf("%f",&valor_montadora);

    //obtendo o valor das porcentagens individuais
    lucro = get_from_percent(valor_montadora,15.f);
    ipi = get_from_percent(valor_montadora,11.f);
    icm = get_from_percent(valor_montadora,17.f);
    
    //somado pra descobrir o valor final 
    valor_final = valor_montadora + lucro + ipi + icm;

    //output pro usuario

    printf("o lucro da montadora e: %f \n",lucro);
    printf("o valor do ipi e: %f \n",ipi);
    printf("o valor do icm e: %f \n",icm);
    printf("o valor do veiculo final e: %f \n",valor_final);
    return EXIT_SUCCESS; // sai do programa
}
