# Atividade de Aula 07 - Ponteiros

---

## 1ª Questão

Escreva uma função chamada **`troca`** que receba os endereços de duas variáveis inteiras (ou seja, dois ponteiros para `int`) e inverta os valores contidos nelas.

**No `main`:**

- Declare duas variáveis, por exemplo, `int a = 5;` e `int b = 10;`;
- Chame a função `troca` passando os **endereços** de `a` e `b`;
- Imprima os valores de `a` e `b` após a execução da função para garantir que `a` passou a valer `10` e `b` passou a valer `5`.

---

## 2ª Questão

Crie uma função chamada **`analisar_array`** que receba um array de inteiros, o tamanho desse array, e dois ponteiros (`int *max` e `int *min`).

A função deve percorrer o array utilizando **aritmética de ponteiros** (ou seja, avançando o endereço com `*(ptr + i)` ou `ptr++` em vez de usar índices tradicionais como `array[i]`) para encontrar o maior e o menor elemento. Os resultados encontrados devem ser guardados diretamente nos endereços passados por parâmetro.

**No `main`:**

- Crie um array preenchido com alguns números (ex.: `12, 5, 27, 8, 43`);
- Declare as variáveis `maior` e `menor`;
- Chame a função e exiba os valores atualizados no console.

---

## 3ª Questão

Escreva uma função chamada **`inverter_palavra`** que receba um ponteiro para o início de uma string (um array de `char` estático, ex.: `char texto[100]`). A função deve inverter a ordem dos caracteres dessa string diretamente na memória, utilizando apenas ponteiros para navegar e modificar o texto.

### Regras estritas

1. **Não** pode utilizar índices de arrays (como `texto[i]`) em nenhuma parte da função de inversão. Toda a navegação deve ser feita incrementando ou decrementando ponteiros (ex.: `p++`, `p--`);
2. **Não** pode utilizar uma string auxiliar. A inversão deve ser feita **in-place** (trocando os caracteres nas extremidades até que os ponteiros se cruzem no meio).

**No `main`:**

- Declare um array de caracteres estático: `char frase[50] = "Ponteiros";`;
- Chame a função passando a `frase`;
- Imprima o resultado (que deverá exibir `sorietnoP`).
