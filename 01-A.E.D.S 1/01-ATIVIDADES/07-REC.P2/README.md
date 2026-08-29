# 2ª AVALIAÇÃO — Recuperação da Prova 02 (Matutino)

---

## EXERCÍCIO 1 — Encadeamento de Funções com Vetores *(7,5 pontos)*

Para simular o subsistema de telemetria de um drone de monitoramento ambiental, você deve processar um vetor de leituras de sensores. Escreva um programa em C que leia um vetor de **8 números inteiros** e execute um encadeamento de funções com as seguintes regras:

- A função `main()` faz a leitura do vetor e chama **apenas** a primeira função: `filtrar_ruidos()`;
- `filtrar_ruidos()`: substitui todos os valores **negativos** do vetor por `0`. Passa o vetor modificado para a função `calcular_amplitude()`;
- `calcular_amplitude()`: identifica o **maior** e o **menor** valor do vetor e calcula a **diferença** entre eles (Amplitude). Passa esse valor inteiro da amplitude para a função `verificar_primalidade()`;
- `verificar_primalidade()`: verifica se o valor da amplitude recebido é um número **primo**. Retorna `1` se for primo e `0` caso contrário;
- A função `main()` recebe o retorno final e imprime na tela:

```
Monitoramento concluído. Status de estabilidade: [retorno_da_funcao]
```

---

## EXERCÍCIO 2 — Análise de Borda e Preenchimento Condicional de Matriz *(7,5 pontos)*

Escreva um programa que leia uma matriz de inteiros de **5 x 5**. O programa deve processar e gerar uma matriz resultante de acordo com os seguintes critérios:

- Calcule a **soma de todos os elementos da borda** da matriz. Se a soma total da borda for um número **par**:
  - região **interna** preenchida com `1`;
  - **borda** toda com `5`;
  - **diagonal principal** toda com `2`;
  - **diagonal inversa** toda com `3`;
  - **ponto central** com `4`.
- Se a soma total da borda for um número **ímpar**:
  - região **interna** preenchida com `0`;
  - **borda** toda com `1`;
  - **diagonal principal** toda com `3`;
  - **diagonal inversa** toda com `2`;
  - **ponto central** com `5`.
- Imprima a matriz resultante de forma organizada (em formato de **grade quadrada**).

---

## EXERCÍCIO 3 — Depuração de Validação de Quadrantes *(7,5 pontos)*

O código abaixo foi desenvolvido para validar se os 9 quadrantes **3 x 3** de uma matriz **9 x 9** de Sudoku possuem apenas números de 1 a 9 sem repetições. Contudo, o programa contém **3 erros distintos** de algoritmo e de execução, além de uma **falha de sintaxe**.

Analise o código atentamente, identifique o **número das linhas** que possuem os erros e faça a devida correção.

> **AVISO IMPORTANTE:** O professor não responderá a nenhuma dúvida sobre esta questão durante a avaliação. O código contém exatamente **3 erros diferentes**. Caso você identifique e consiga fundamentar a existência de mais algum erro além dos 3 previstos, reporte-o detalhadamente na folha de respostas. Lembramos que erros de sintaxe idênticos são considerados **falhas recorrentes de um mesmo padrão estrutural**.

### Código do Exercício 3

```c
1  #include <stdio.h>
2  int validar_quadrantes_sudoku(int matriz[9][9]) {
3      for (int linha_inicio = 0; linha_inicio < 9; linha_inicio += 3) {
4          for (int coluna_inicio = 0; coluna_inicio < 9; coluna_inicio++) {
5              int digitados[10] = {0}
6
7              for (int i = 0; i < 3; i++) {
8                  for (int j = 0; j < 3; j++) {
9                      int num = matriz[linha_inicio + i][coluna_inicio + j]
10                     if (num < 1 || num > 9) {
11                         return 0
12                     }
13                     if (digitados[num] == 1) {
14                         return 0
15                     }
16                     digitados[num] = 1
17                 }
18
19             }
20         }
21     }
22     return 1
23 }
24 int main() {
25     int sudoku[9][9] = {
           {5, 3, 4, 6, 7, 8, 9, 1, 2}, {6, 7, 2, 1, 9, 5, 3, 4, 8}, {1, 9, 8, 3, 4, 2, 5, 6, 7},
           {8, 5, 9, 7, 6, 1, 4, 2, 3}, {4, 2, 6, 8, 5, 3, 7, 9, 1}, {7, 1, 3, 9, 2, 4, 8, 5, 6},
           {9, 6, 1, 5, 3, 7, 2, 8, 4}, {2, 8, 7, 4, 1, 9, 6, 3, 5}, {3, 4, 5, 2, 8, 6, 1, 7, 9} };
26     if (validar_quadrantes_sudoku == 1) {
27         printf("Todos os 9 quadrantes sao validos!\n")
28     } else {
29         printf("Erro encontrado nos quadrantes do Sudoku.\n")
30     }
31     return 0
32 }
```

---

## EXERCÍCIO 4 — Criptografia Total com Ordenação Parcial *(7,5 pontos)*

Escreva um programa em linguagem C que receba **6 palavras** (de até **25 caracteres** cada) e armazene-as em uma matriz. O programa deve realizar as seguintes etapas:

1. **Ordenação Parcial:** ordene em ordem alfabética **apenas** as palavras dos **índices pares** da matriz. As palavras dos índices ímpares **não devem mudar de lugar**;
2. **Criptografia Geral na Main:** logo após a ordenação, percorra todas as 6 strings da matriz, caractere por caractere, **diretamente na função `main()`**. Aplique a criptografia na própria matriz seguindo as regras abaixo:
   - Se o índice do caractere dentro da string for **par**, avance **3 posições** na tabela ASCII (ex.: `'a'` vira `'d'`);
   - Se o índice do caractere dentro da string for **ímpar**, recue **2 posições** na tabela ASCII (ex.: `'c'` vira `'a'`).

> **Atenção:** altere apenas **letras** do alfabeto (maiúsculas ou minúsculas). Símbolos ou o caractere nulo `'\0'` **não** devem ser modificados.

3. **Saída Parcial:** imprima a matriz na tela, linha por linha, exibindo o resultado de todas as palavras criptografadas;
4. **Função de Descriptografia:** crie uma função que receba uma string criptografada **por valor** e a exiba na tela revertida para o seu formato original (antes do processo de criptografia do passo 2).
