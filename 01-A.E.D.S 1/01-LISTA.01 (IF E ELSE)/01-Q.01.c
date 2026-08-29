#include <stdio.h>

// Questão 01 - Cálculo de IMC
int main() {
    float peso = 0;
    float altura = 0;
    printf("Digite seu peso:\n");
    scanf("%f", &peso);
    printf("Digite sua altura:\n");
    scanf("%f", &altura);
    float imc = peso / (altura*altura);
    printf("O índice de massa corporal dessa pessoa é: %.2f", imc);
}