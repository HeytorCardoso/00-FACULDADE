#include <stdio.h>

// Questão 09 - Realizar a coleta das variáveis A e B e trocar os valores delas
int main() {
    float vari_a = 0;
    float vari_b = 0;

    printf("Digite o valor da variável A (valor numérico!):\n");
    scanf("%f", &vari_a);
    printf("Digite o valor da variável B (valor numérico!):\n");
    scanf("%f", &vari_b);

    float vari_c = vari_a;
    vari_a=vari_b;
    vari_b=vari_c;
    printf("O valor da variável A, agora é %.2f, e o valor de B é %.2f, pois foram trocadas.", vari_a, vari_b);
}