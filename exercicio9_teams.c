//bibliotecas basicas
#include<stdlib.h>
#include<stdio.h>

//variaveis inteiras
int alunos,restante;


int main(void){
    //lendo a quantia de alunos
    printf("a quantia total e: ");
    scanf("%d",&alunos);

    // obtem e printa o nnumero de grupos
    int grupos = alunos / 4;
    printf("%d e o numero de grupos\n",grupos);

    //obtem e printa o resto
    int resto = alunos % 4;
    printf("%d e o restante sozinho\n",resto);
    return EXIT_SUCCESS; // sai do programa sozinho
}