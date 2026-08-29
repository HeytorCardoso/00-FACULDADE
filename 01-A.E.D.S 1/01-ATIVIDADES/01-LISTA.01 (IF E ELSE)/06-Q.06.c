#include <stdio.h>

// Questão 06 - Conversão de graus Fahrenheit para graus Celsius
int main() {
    float temp_f = 0;
    printf("Digite a temperatura em graus Fahrenheit: \n");
    scanf("%f", &temp_f);
    float convert = ((temp_f-32)/9)*5;
    printf("%.2f graus Fahrenheit é igual à %.2f graus Celsius", temp_f, convert);
}