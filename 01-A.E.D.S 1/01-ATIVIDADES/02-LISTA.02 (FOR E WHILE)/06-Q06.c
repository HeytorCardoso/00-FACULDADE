#include <stdio.h>

int main() {
    int A, B;

    do {
        printf("Digite dois números inteiros positivos (A e B, onde A < B):\n");
        printf("A: ");
        scanf("%d", &A);
        printf("B: ");
        scanf("%d", &B);

        if (A <= 0 || B <= 0) {
            printf("Erro: Os números devem ser inteiros POSITIVOS!\n\n");
        } else if (A >= B) {
            printf("Erro: O valor de A deve ser MENOR que o valor de B!\n\n");
        }

    } while (A <= 0 || B <= 0 || A >= B);

    printf("\nNúmeros que atendem aos critérios no intervalo [%d, %d]:\n", A, B);
    
    int encontrou_algum = 0;

    for (int i = A; i <= B; i++) {
        int divisivel_por_2 = (i % 2 == 0);
        int divisivel_por_7 = (i % 7 == 0);

        if ((divisivel_por_2 || divisivel_por_7) && !(divisivel_por_2 && divisivel_por_7)) {
            
            int temp = i;
            int multiplicacao_digitos = 1;
            
            while (temp > 0) {
                int digito = temp % 10;
                multiplicacao_digitos *= digito;
                temp /= 10;
            }

            if (multiplicacao_digitos % 2 != 0) {
                printf("%d\n", i);
                encontrou_algum = 1;
            }
        }
    }

    if (!encontrou_algum) {
        printf("Nenhum número atendeu a todos os critérios nesse intervalo.\n");
    }

    return 0;
}
