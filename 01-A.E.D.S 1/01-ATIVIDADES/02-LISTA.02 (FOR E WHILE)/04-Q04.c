#include <stdio.h>

int main() {
    int num1 = 0, num2 = 0;
    int multiplicacao = 0, soma = 0;
    float divisao = 0.0, subtracao = 0.0;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    multiplicacao = num1 * num2;
    printf("\nMultiplicação ( %d * %d ) = %d\n", num1, num2, multiplicacao);

    soma = multiplicacao + num1;
    printf("Soma com o primeiro número ( %d + %d ) = %d\n", multiplicacao, num1, soma);

    if (num2 == 0) {
        printf("\nErro: Impossível continuar, pois o segundo número eh zero e não existe divisão por 0.\n");
        return 1;
    }

    divisao = (float)soma / num2;
    printf("Divisão pelo segundo número ( %d / %d ) = %.2f\n", soma, num2, divisao);

    subtracao = divisao - num2;
    printf("Subtração usando o segundo número ( %.2f - %d ) = %.2f\n", divisao, num2, subtracao);

    return 0;
}
