#include <stdio.h>

int main() {
    int valor;
    int soma = 0;
    int pares = 0;
    int impares = 0;
    
    int maior = 0, segundo_maior = 0;
    int menor = 0, segundo_menor = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %do valor: ", i + 1);
        scanf("%d", &valor);

        soma += valor;

        if (valor % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        if (i == 0) {
            maior = valor;
            menor = valor;
        } else if (i == 1) {
            if (valor > maior) {
                segundo_maior = maior;
                maior = valor;
            } else {
                segundo_maior = valor;
            }

            if (valor < menor) {
                segundo_menor = menor;
                menor = valor;
            } else {
                segundo_menor = valor;
            }
        } else {
            if (valor > maior) {
                segundo_maior = maior;
                maior = valor;
            } else if (valor > segundo_maior) {
                segundo_maior = valor;
            }
            if (valor < menor) {
                segundo_menor = menor;
                menor = valor;
            } else if (valor < segundo_menor) {
                segundo_menor = valor;
            }
        }
    }

    float media = (float)soma / 10.0;

    printf("Soma dos valores: %d\n", soma);
    printf("Media dos valores: %.2f\n", media);
    printf("Maior valor: %d\n", maior);
    printf("Segundo maior valor: %d\n", segundo_maior);
    printf("Menor valor: %d\n", menor);
    printf("Segundo menor valor: %d\n", segundo_menor);
    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);

    return 0;
}
