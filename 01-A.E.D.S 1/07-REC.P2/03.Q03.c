#include <stdio.h>

/**
 * Erros encontrados:
 * 1. Linha 4: O incremento do loop da coluna_inicio deveria ser += 3 para saltar entre os quadrantes.
 * 2. Linha 26: A função estava sendo comparada pelo seu endereço, e não pelo seu retorno (faltou a chamada com parâmetros).
 * 3. Sintaxe: Diversos pontos e vírgulas (;) ausentes em várias linhas (5, 9, 11, 14, 16, 22, 27, 29, 31).
 */

int validar_quadrantes_sudoku(int matriz[9][9]) {
    for (int linha_inicio = 0; linha_inicio < 9; linha_inicio += 3) {
        // CORREÇÃO 1: Incremento deve ser de 3 em 3 para validar os blocos corretamente
        for (int coluna_inicio = 0; coluna_inicio < 9; coluna_inicio += 3) { 
            int digitados[10] = {0}; // CORREÇÃO 3: Adição do ponto e vírgula
            
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int num = matriz[linha_inicio + i][coluna_inicio + j]; // CORREÇÃO 3: Adição do ponto e vírgula
                    
                    if (num < 1 || num > 9) {
                        return 0; // CORREÇÃO 3: Adição do ponto e vírgula
                    }
                    
                    if (digitados[num] == 1) {
                        return 0; // CORREÇÃO 3: Adição do ponto e vírgula
                    }
                    digitados[num] = 1; // CORREÇÃO 3: Adição do ponto e vírgula
                }
            }
        }
    }
    return 1; // CORREÇÃO 3: Adição do ponto e vírgula
}

int main() {
    int sudoku[9][9] = { 
        {5, 3, 4, 6, 7, 8, 9, 1, 2}, 
        {6, 7, 2, 1, 9, 5, 3, 4, 8}, 
        {1, 9, 8, 3, 4, 2, 5, 6, 7},
        {8, 5, 9, 7, 6, 1, 4, 2, 3}, 
        {4, 2, 6, 8, 5, 3, 7, 9, 1}, 
        {7, 1, 3, 9, 2, 4, 8, 5, 6}, 
        {9, 6, 1, 5, 3, 7, 2, 8, 4},
        {2, 8, 7, 4, 1, 9, 6, 3, 5}, 
        {3, 4, 5, 2, 8, 6, 1, 7, 9} 
    };

    // CORREÇÃO 2: Chamada correta da função passando o argumento e parênteses
    if (validar_quadrantes_sudoku(sudoku) == 1) { 
        printf("Todos os 9 quadrantes sao validos!\n"); // CORREÇÃO 3: Adição do ponto e vírgula
    } else {
        printf("Erro encontrado nos quadrantes do Sudoku.\n"); // CORREÇÃO 3: Adição do ponto e vírgula
    }

    return 0; // CORREÇÃO 3: Adição do ponto e vírgula
}
