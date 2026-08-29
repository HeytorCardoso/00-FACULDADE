#include <stdio.h>

int main() {
    int matriz[5][5];
    int resultante[5][5];
    int soma_borda = 0;
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Digite o valor para [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == 0 || i == 4 || j == 0 || j == 4) {
                soma_borda += matriz[i][j];
            }
        }
    }

    printf("\nSoma da borda encontrada: %d\n", soma_borda);

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (soma_borda % 2 == 0) {
                if (i == 2 && j == 2) {
                    resultante[i][j] = 4;
                } else if (i == j) {
                    resultante[i][j] = 2;
                } else if (i + j == 4) {
                    resultante[i][j] = 3;
                } else if (i == 0 || i == 4 || j == 0 || j == 4) {
                    resultante[i][j] = 5;
                } else {
                    resultante[i][j] = 1;
                }
            } else {
                if (i == 2 && j == 2) {
                    resultante[i][j] = 5;
                } else if (i == j) {
                    resultante[i][j] = 3;
                } else if (i + j == 4) {
                    resultante[i][j] = 2;
                } else if (i == 0 || i == 4 || j == 0 || j == 4) {
                    resultante[i][j] = 1;
                } else {
                    resultante[i][j] = 0;
                }
            }
        }
    }

    printf("\nMatriz Resultante:\n");
    for (i = 0; i < 5; i++) {
        printf("| ");
        for (j = 0; j < 5; j++) {
            printf("%d ", resultante[i][j]);
        }
        printf("|\n");
    }

    return 0;
}
