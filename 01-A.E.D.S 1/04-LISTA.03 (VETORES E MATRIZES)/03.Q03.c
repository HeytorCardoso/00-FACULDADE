#include <stdio.h>
#include <stdlib.h>

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void inicializarTabuleiro(int tab[9][9]) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            tab[i][j] = 0;
        }
    }
}

void exibirTabuleiro(int tab[9][9]) {
    printf("\n        COLUNAS\n");
    printf("     0 1 2   3 4 5   6 7 8\n");
    printf("   +-------+-------+-------+\n");
    for (int i = 0; i < 9; i++) {
        if (i > 0 && i % 3 == 0) {
            printf("   +-------+-------+-------+\n");
        }
        printf(" %d | ", i);
        for (int j = 0; j < 9; j++) {
            if (j > 0 && j % 3 == 0) {
                printf("| ");
            }
            if (tab[i][j] == 0) {
                printf(". ");
            } else {
                printf("%d ", tab[i][j]);
            }
        }
        printf("|\n");
    }
    printf("   +-------+-------+-------+\n\n");
}

void inserirTabuleiro(int tab[9][9]) {
    printf("\n=== INSERIR TABULEIRO ===\n");
    printf("Voce ira preencher o tabuleiro linha por linha.\n");
    printf("Para cada linha (0 a 8), digite os 9 valores de 1 a 9 separados por espaco.\n");
    printf("Use 0 (zero) para representar celulas vazias se nao for preencher tudo agora.\n");
    printf("Exemplo para uma linha: 5 3 0 0 7 0 0 0 2\n\n");

    for (int i = 0; i < 9; i++) {
        int linha_valida = 0;
        while (!linha_valida) {
            printf("Digite os 9 valores da LINHA %d: ", i);
            int temporario[9];
            int lidos = 0;

            for (int j = 0; j < 9; j++) {
                if (scanf("%d", &temporario[j]) == 1) {
                    lidos++;
                } else {
                    break;
                }
            }

            limparBuffer();

            if (lidos == 9) {
                int valores_ok = 1;
                for (int j = 0; j < 9; j++) {
                    if (temporario[j] < 0 || temporario[j] > 9) {
                        valores_ok = 0;
                        printf("Erro: O valor %d na coluna %d eh invalido! Os valores devem estar entre 0 e 9.\n", temporario[j], j);
                    }
                }

                if (valores_ok) {
                    for (int j = 0; j < 9; j++) {
                        tab[i][j] = temporario[j];
                    }
                    linha_valida = 1;
                } else {
                    printf("Por favor, redigite a LINHA %d.\n", i);
                }
            } else {
                printf("Erro: Entrada invalida! Voce deve digitar exatamente 9 inteiros separados por espacos.\n");
                printf("Por favor, redigite a LINHA %d.\n", i);
            }
        }
        
        exibirTabuleiro(tab);
    }
    printf("Tabuleiro completo inserido com sucesso!\n");
}

int verificarValidade(int tab[9][9]) {
    int valido = 1;
    int completo = 1;

    printf("\n--- ANALISANDO A VALIDADE DO TABULEIRO ---\n");

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (tab[i][j] < 0 || tab[i][j] > 9) {
                printf("[ERRO] Valor invalido '%d' na Linha %d, Coluna %d.\n", tab[i][j], i, j);
                valido = 0;
            } else if (tab[i][j] == 0) {
                completo = 0;
            }
        }
    }

    if (!valido) {
        printf("\nResultado: O tabuleiro contem valores invalidos e NAO eh um Sudoku valido!\n");
        return 0;
    }

    for (int i = 0; i < 9; i++) {
        int freq[10] = {0};
        for (int j = 0; j < 9; j++) {
            int val = tab[i][j];
            if (val != 0) {
                freq[val]++;
                if (freq[val] > 1) {
                    printf("[VIOLACAO] Regra 1: Numero %d duplicado na LINHA %d.\n", val, i);
                    valido = 0;
                }
            }
        }
    }

    for (int j = 0; j < 9; j++) {
        int freq[10] = {0};
        for (int i = 0; i < 9; i++) {
            int val = tab[i][j];
            if (val != 0) {
                freq[val]++;
                if (freq[val] > 1) {
                    printf("[VIOLACAO] Regra 2: Numero %d duplicado na COLUNA %d.\n", val, j);
                    valido = 0;
                }
            }
        }
    }

    for (int bloco = 0; bloco < 9; bloco++) {
        int freq[10] = {0};
        int inicio_linha = (bloco / 3) * 3;
        int inicio_coluna = (bloco % 3) * 3;

        for (int i = inicio_linha; i < inicio_linha + 3; i++) {
            for (int j = inicio_coluna; j < inicio_coluna + 3; j++) {
                int val = tab[i][j];
                if (val != 0) {
                    freq[val]++;
                    if (freq[val] > 1) {
                        printf("[VIOLACAO] Regra 3: Numero %d duplicado no BLOCO 3x3 (quadrante superior-esquerdo em Linha %d, Coluna %d).\n",
                               val, inicio_linha, inicio_coluna);
                        valido = 0;
                    }
                }
            }
        }
    }

    if (!valido) {
        printf("\nResultado: O tabuleiro VIOLA as regras do Sudoku. NAO eh valido!\n");
        return 0;
    } else if (!completo) {
        printf("\nResultado: O tabuleiro esta INCOMPLETO (tem celulas vazias), mas NAO possui conflitos ate o momento.\n");
        printf("Para ser considerado um Sudoku valido completo, todas as celulas devem estar preenchidas.\n");
        return 2;
    } else {
        printf("\nResultado: O tabuleiro eh um SUDOKU VALIDO E COMPLETO! Parabens!\n");
        return 1;
    }
}

void gerarExemploValido(int tab[9][9]) {
    int exemplo[9][9] = {
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

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            tab[i][j] = exemplo[i][j];
        }
    }
    printf("\nExemplo de Sudoku valido carregado com sucesso!\n");
}

int main() {
    int sudoku[9][9];
    int opcao = 0;

    inicializarTabuleiro(sudoku);

    do {
        printf("=== MENU DE OPCOES ===\n");
        printf("1. Inserir Tabuleiro Manualmente\n");
        printf("2. Verificar Validade do Tabuleiro\n");
        printf("3. Gerar Exemplo de Sudoku Valido\n");
        printf("4. Exibir o Tabuleiro Atual\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao (1-5): ");

        if (scanf("%d", &opcao) != 1) {
            printf("\nErro: Entrada invalida! Digite apenas numeros de 1 a 5.\n\n");
            limparBuffer();
            opcao = 0;
            continue;
        }

        limparBuffer();

        switch (opcao) {
            case 1:
                inserirTabuleiro(sudoku);
                break;
            case 2:
                verificarValidade(sudoku);
                break;
            case 3:
                gerarExemploValido(sudoku);
                break;
            case 4:
                exibirTabuleiro(sudoku);
                break;
            case 5:
                printf("\nSaindo do programa... Ate logo!\n");
                break;
            default:
                printf("\nOpcao invalida! Escolha um numero entre 1 e 5.\n\n");
                break;
        }
    } while (opcao != 5);

    return 0;
}