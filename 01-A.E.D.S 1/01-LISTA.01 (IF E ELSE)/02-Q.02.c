#include <stdio.h>

// Questão 02 - Conversão de graus Celsius para graus Fahrenheit
int main() {
    float temp_c = 0;
    printf("Digite a temperatura em Celsius:\n");
    scanf("%f", &temp_c);
    float far = (temp_c * (9.0/5.0)) + 32;
    printf("%.2f graus Celsius é igual à %.2f em graus Fahrenheit.", temp_c, far);
}