#include <stdio.h>
#include <stdlib.h>

//variaveis a serem lidas pelo programa
float salario;
int dependente;

int main(void){
// scan do user inputs

printf("salario: ");
scanf("%f",&salario);
printf("numero de dependentes: ");
scanf("%d",&dependente);
// calcula salario familia 
float salario_final = (salario/100.0f) * dependente;

//salario familia impresso no terminal
printf("%f rs e o salario familia do funcionario",salario_final);
    return EXIT_SUCCESS; // sai do programa
}