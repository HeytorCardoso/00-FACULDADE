#include <stdio.h>

int main() {
    int n;
    int anterior = 0;
    int atual = 1;
    int proximo;
    int i;

    printf("Digite a quantidade de dias (N): ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Nenhum dado para monitorar\n");
    } 
    else if (n == 1) {
        printf("0\n");
    } 
    else if (n >= 2) {
        printf("0, 1");

        for (i = 3; i <= n; i++) {
            proximo = anterior + atual;
            printf(", %d", proximo);

            anterior = atual;
            atual = proximo;
        }
        printf("\n");
    }

    return 0;
}