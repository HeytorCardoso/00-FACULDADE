#include <stdio.h>

// Questão 03 - Descobrir perímetro e área de uma circunferência a partir de um raio
int main() {
    float raio = 0;
    float pi = 3.14;
    printf("Digite o raio da circunferência:\n");
    scanf("%f", &raio);
    float perimetro = 2*pi*raio;
    float area = pi*(raio*raio);
    printf("Uma circunferência de raio %.2f tem um perímetro de %.2f e uma área de %.2f.", raio, perimetro, area);
}