#include <stdio.h>

// Questão 08 - Descobrir o salário final de um encanador considerando dias trabalhados e impostos
int main() {
    int dias_trab = 0;
    printf("Informe quantos dias o encanador trabalhou:\n");
    scanf("%d", &dias_trab);
    float salario_brut = (30*dias_trab);
    float salario_liq = salario_brut - (salario_brut*0.08);
    printf("O salário líquido do encanador foi de: R$ %.2f, sendo que foram descontados R$ %.2f do imposto de renda.", salario_liq, (salario_brut*0.08));
}