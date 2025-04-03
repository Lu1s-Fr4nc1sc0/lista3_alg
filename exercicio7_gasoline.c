// libs basicas e a math pra usar o ceil
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// pelo calculo da proporcionalidade, um galao anda 60km
const float galao = 60.f;

// variaveis hora e km
float kmh, tempo;

int main(void){
    // lendo input do user
    printf("km/h: ");
    scanf("%f",&kmh);
    printf("tempo de viagem: ");
    scanf("%f",&tempo);

    // calcula e retorna os galões cheios
    int galoes_cheios = ceil((tempo * kmh) / galao );
    printf("%d sao os galoes cheios necessarios",galoes_cheios);
    return EXIT_SUCCESS; //sai do programa
}