#include <stdio.h>

int main() {
    double multiplicacao = 1.0;
    long long soma = 0; 
    int contagem = 0;

    for (int i = 2; i < 2000; i += 2) {
        if (i % 4 == 0 || i % 6 == 0) {
            multiplicacao *= i;
            soma += i;
            contagem++;
        }
    }

    printf("Total de numeros encontrados: %d\n", contagem);
    printf("A multiplicação de todos eles eh: %e\n", multiplicacao);
    printf("A soma de todos eles eh: %lld\n\n", soma);

    return 0;
}
