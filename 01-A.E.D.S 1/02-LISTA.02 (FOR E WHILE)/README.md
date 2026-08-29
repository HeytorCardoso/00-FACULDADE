# Atividade de Aula 02 - Laços de Repetição

---

## 1ª Questão

Faça um programa que leia 10 valores inteiros e, ao final, mostre:

- A **soma** dos valores;
- A **média** dos valores;
- O **maior** valor e o **segundo maior** valor;
- O **menor** valor e o **segundo menor** valor;
- Quantos números eram **pares** e quantos eram **ímpares**.

---

## 2ª Questão

Faça um programa que demonstre **todos os divisores** para os números entre 1 e `N`, sendo `N` um valor recebido do usuário. Dê um **destaque** para todo número que for primo.

---

## 3ª Questão

Faça um programa que multiplique todos os números pares abaixo de **2000** que sejam múltiplos de **4** ou **6**.

---

## 4ª Questão

Escreva um programa que:

- Leia dois números inteiros fornecidos pelo usuário;
- Calcule a **multiplicação** entre os dois números e imprima o resultado;
- Com base no resultado da multiplicação, calcule a **soma** desse valor com o primeiro número e imprima o valor da soma;
- Com base na soma, calcule a **divisão** desse valor pelo segundo número e imprima o resultado;
- Por fim, **subtraia** o segundo número do valor obtido na divisão e mostre o resultado final.

---

## 5ª Questão — Cálculo da Taxa Metabólica Basal (TMB)

Escreva um programa que:

- Leia o **sexo** (`M` para masculino, `F` para feminino), a **idade** (em anos), o **peso** (em kg) e a **altura** (em cm) de uma pessoa;
- Calcule a **Taxa Metabólica Basal (TMB)** com base nas fórmulas:

**Para homens:**

$$
TMB = 88{,}36 + (13{,}4 \times peso) + (4{,}8 \times altura) - (5{,}7 \times idade)
$$

**Para mulheres:**

$$
TMB = 447{,}6 + (9{,}2 \times peso) + (3{,}1 \times altura) - (4{,}3 \times idade)
$$

- Classifique o valor da TMB de acordo com a faixa etária:

| Faixa Etária (anos) | Classificação da TMB    |
| ------------------- | ----------------------- |
| Até 25              | Metabolismo Acelerado   |
| 26 a 45             | Metabolismo Normal      |
| 46 a 60             | Metabolismo Moderado    |
| Acima de 60         | Metabolismo Lento       |

- Exiba o valor calculado da TMB e sua respectiva classificação.

---

## 6ª Questão — Números com Multiplicação de Dígitos

Escreva um programa que:

- Solicite ao usuário dois números inteiros positivos `A` e `B`, garantindo que `A < B`;
- Percorra todos os números no intervalo fechado de `A` a `B` e, para cada número:
  1. Verifique se ele é divisível por **2** ou **7**, mas **não por ambos** ao mesmo tempo;
  2. Calcule a **multiplicação dos dígitos** do número (exemplo: para 235, seria 2 × 3 × 5 = 30);
  3. Se a multiplicação dos dígitos for um número **ímpar**, o número original deve ser exibido na tela.

---

## 7ª Questão — Monitoramento de Estudos Semanais

Implemente um programa que registre as horas de estudo de um aluno durante **4 semanas (28 dias)**.

- Utilize um **laço externo** para representar as semanas (1 a 4);
- Utilize um **laço interno** para representar os 7 dias de cada semana;
- Para cada dia, leia quantas horas o aluno estudou. Se a entrada for `-1`, considere que o aluno não estudou naquele dia e **ignore** esse valor nas médias.

Ao final, o programa deve:

1. Exibir o **total de horas** estudadas em cada semana;
2. Calcular a **média diária** de horas estudadas em cada semana (considerando apenas os dias com entrada válida);
3. Indicar o dia com **maior** número de horas de estudo no mês, mostrando a semana e o dia correspondente;
4. Indicar o dia com **menor** número de horas de estudo diferente de zero, também informando a semana e o dia;
5. Exibir o **total geral** de horas estudadas no mês.
