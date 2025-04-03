/* Programa de soma de médias usando for loop e manipulação de string feita por
luís f. b. rivili para lista de exercícios de da turma c12 de algoritimos da utfpr-cp*/

/*Esse programa foge dos conceitos do exercicio(mesmo reproduzindo o que foi pedido),
pra acostumar com a sintase e bibliotecas padrao de c
*/ 
//bibliotecas de sistema e manipulação de string e funções
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// variaveis a serem ultilizadas

int notas[12]; // são até 12 notas posicionadas no array de somatório

int i; // iterador do loop !

int nota_final = 0; // será nossa nota final

char buffer[200]; // mais conhecido como buffer essa é a entrada do caro amigo usuário
// função principal do programa !
int main(void){
    printf("Medium 0.1\n nao inserir nada alem de numeros e , !\n");
    printf("Nota no formato (n1,n2,n3,n4,...,n,....): "); // função embeleza o pedido da nota
    scanf("%s",buffer); // função que lê uma string que vai receber as notas para o calculo
    char* token = strtok(buffer,","); // defindo o caractere que corta-rá a string em pedaços menores(ou tokens)
    // percorrendo finitamente o string para cortá-lo 
    for(i=0;token != NULL;i++){
        printf("nota %d: %s\n",(i + 1),token); // output das notas que estão na array de somatório 
        notas[i] = atoi(token); /* adiciona os inteiros do tipo array(não remove só inteiros, por isso os caracteres bugam a soma)
        na array de inteiros do somátorio */
        nota_final = nota_final + notas[i]; // soma a cada inteiro novo o seu valor a nota final
        token = strtok(NULL, ","); // muda o "cortador" para próxima casa em que ele se encontra na entrada do usúario 
    }
    nota_final = nota_final / i; /* obtém a média dividindo o inteiro da 
    nota final pelo inteiro do dor loop anterior(que contém o mesmo tamanho das n notas adicionadas); */
    printf("Sua nota final e: %d\n",nota_final); //devolve ao usúario sua média final
    return EXIT_SUCCESS; // fecha o nosso programa !
};