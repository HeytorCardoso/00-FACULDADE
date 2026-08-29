#include <stdio.h>

// Questão 07 - Descobrir o salário final de um funcionário considerando gratificação e impostos
int main() {
    float salario_base = 0;
    printf("Digite seu salário base:\n");
    scanf("%f", &salario_base);
    float grat = salario_base * 0.05;
    float impost = salario_base * 0.07;
    float salario_final = (salario_base+grat)-impost;
    printf("Sua gratificação foi de R$ %.2f, e o descontos de impostos foram de R$ %.2f, resultando em um salário final de: R$ %.2f", grat, impost, salario_final);
}