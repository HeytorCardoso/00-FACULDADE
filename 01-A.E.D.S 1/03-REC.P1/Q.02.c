#include <stdio.h>

int main() {
    int tipo;
    float valor_inicial, saldo_final, lucro;
    int meses;

    printf("Escolha o investimento (1-Poupanca, 2-Renda Fixa, 3-Acoes): ");
    scanf("%d", &tipo);

    printf("Digite o valor que deseja investir: ");
    scanf("%f", &valor_inicial);

    printf("Digite a quantidade de meses: ");
    scanf("%d", &meses);

    if (tipo == 1) {
        lucro = valor_inicial * 0.007 * meses;
        saldo_final = valor_inicial + lucro;
        printf("Lucro obtido: R$ %.2f\n", lucro);
        printf("Saldo final: R$ %.2f\n", saldo_final);
    } 
    else if (tipo == 2) {
        lucro = valor_inicial * 0.012 * meses;
        saldo_final = valor_inicial + lucro;
        printf("Lucro obtido: R$ %.2f\n", lucro);
        printf("Saldo final: R$ %.2f\n", saldo_final);
    } 
    else if (tipo == 3) {
        if (valor_inicial > 1000) {
            lucro = (valor_inicial * 0.02 * meses) - (20 * meses);
            saldo_final = valor_inicial + lucro;
            printf("Lucro obtido: R$ %.2f\n", lucro);
            printf("Saldo final: R$ %.2f\n", saldo_final);
        } else {
            printf("Investimento Nao Permitido\n");
        }
    } 
    else {
        printf("Opcao de investimento invalida!\n");
    }

    return 0;
}