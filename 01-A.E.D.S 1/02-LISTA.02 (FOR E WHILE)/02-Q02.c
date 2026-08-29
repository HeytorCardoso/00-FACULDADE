#include <stdio.h>

int main() {
    int N = 0;
    int divisores = 0;
    
    printf("Digite o valor de N: ");
    scanf("%d", &N);
    
    printf("Divisores de %d: ", N);
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            printf("(%d) ", i);
            divisores++;
        }
    }
    if (divisores == 2) {
            printf("\nO número fornecido é primo!");
        }
    return 0;
}
