# Atividade de Aula 08 – Alocação Dinâmica de Memória

---

## 1ª Questão

Escreva um programa que peça ao usuário um número inteiro **N** (que será o tamanho de um array).

- Aloque **dinamicamente** um array de inteiros com esse tamanho `N` usando `malloc`;
- Garanta que a alocação foi bem-sucedida (verifique se o ponteiro não é `NULL`);
- Peça ao usuário para preencher os `N` elementos deste array;
- Aloque um **segundo array** de mesmo tamanho e copie todos os valores do primeiro array para este segundo, mas **multiplicados por 2**;
- Imprima o segundo array e, antes de encerrar o programa, libere a memória de ambos os arrays usando `free`.

---

## 2ª Questão

Imagine um sistema escolar onde o professor não sabe quantas notas quer lançar para um aluno. O programa deve começar alocando dinamicamente um array para apenas **3 notas** (usando `malloc` ou `calloc`).

O programa deve ler as notas do usuário em um ciclo (*loop*):

- Se o professor digitar mais do que 3 notas, o programa deve usar **`realloc`** para aumentar o tamanho do array, adicionando espaço para **mais 3 notas** de cada vez (passando para 6, depois 9, etc.);
- O ciclo termina quando o usuário digitar um **valor negativo** (por exemplo, `-1`);
- No final, o programa deve calcular e exibir a **média aritmética** de todas as notas digitadas e, claro, **liberar** a memória alocada.
