# Atividade de Aula 03 - Vetores e Matrizes

---

## 1ª Questão — Vetor: Estatísticas de Ocorrências e Análise de Frequência

Escreva um programa em C que leia **30 números inteiros** e os armazene em um vetor. Em seguida, o programa deve:

**Verificar e exibir:**

- Todos os números **distintos** digitados;
- **Quantas vezes** cada número distinto aparece no vetor.

**Identificar:**

- O número que **mais se repete** e quantas vezes apareceu;
- O número que **menos se repete** (mas que apareceu ao menos uma vez).

**Mostrar:**

- Todos os números que aparecem **exatamente duas vezes**;
- Todos os números que aparecem **mais de duas vezes**.

**Exibir** os números em **ordem crescente** (apenas os distintos).

---

## 2ª Questão — Matriz: Jogo de Caça ao Tesouro

Implemente um programa em C que simula um jogo de "caça ao tesouro" em uma matriz **5x5**. O programa deve:

- Criar uma matriz 5x5 e inicializá-la com **zeros**;
- Sortear aleatoriamente **3 posições diferentes** da matriz e colocar nelas o número `1`, indicando que há um "tesouro" escondido;
- O jogador terá **10 tentativas** para encontrar os 3 tesouros. A cada tentativa, ele deve digitar uma **linha** e uma **coluna**:
  - Se encontrar um tesouro, exibir `"Tesouro encontrado!"` e marcar a posição como `2`;
  - Se não encontrar, exibir `"Nada aqui!"` e marcar como `-1`.
- Após 10 tentativas ou após os 3 tesouros serem encontrados, mostrar a **matriz final**, onde:

| Valor | Significado                |
| ----- | -------------------------- |
| `2`   | Tesouro encontrado         |
| `-1`  | Tentativa sem sucesso      |
| `1`   | Tesouro não encontrado     |
| `0`   | Local não visitado         |

**Requisitos adicionais:**

- Use `rand()` e `srand(time(NULL))` para sortear as posições;
- Garanta que os 3 tesouros sejam colocados em posições **diferentes**;
- Não deixe o jogador jogar na **mesma posição duas vezes**.

---

## 3ª Questão — Sudoku em C

O Sudoku é um quebra-cabeça lógico onde o objetivo é preencher uma grade **9 x 9** com dígitos de 1 a 9. Para que um tabuleiro seja considerado **válido**, ele deve respeitar três regras fundamentais:

1. Cada **linha** deve conter todos os dígitos de 1 a 9 sem repetições;
2. Cada **coluna** deve conter todos os dígitos de 1 a 9 sem repetições;
3. Cada uma das nove **subgrades 3 x 3** (chamadas de "blocos" ou "caixas") deve conter todos os dígitos de 1 a 9 sem repetições.

Escreva um programa em linguagem C que utilize uma matriz bidimensional `int sudoku[9][9]` e apresente ao usuário um **menu interativo** com as seguintes opções:

1. **Inserir Tabuleiro:** permitir que o usuário preencha manualmente os 81 valores da matriz;
2. **Verificar Validade:** analisar o tabuleiro atual e informar se ele é um Sudoku válido ou se viola alguma regra;
3. **Gerar Exemplo Válido:** preencher a matriz com um tabuleiro pré-definido (ou gerado logicamente) que seja comprovadamente válido;
4. **Exibir o Tabuleiro**;
5. **Sair:** encerrar o programa.