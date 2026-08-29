# 1ª AVALIAÇÃO — Recuperação da Prova 01 (Matutino)

---

## Exercício 1 — Decomposição Inteligente de Tempo (5 pontos)

Escreva um programa em linguagem C que leia um valor inteiro correspondente ao total de **segundos** acumulados em um processo de automação industrial. O programa deve calcular e exibir esse tempo de forma decomposta, seguindo as regras abaixo:

1. **Cálculo da Decomposição:** o tempo deve ser transformado em **Anos, Meses, Semanas, Dias, Horas, Minutos e Segundos**.
2. **Exibição Seletiva (Saída Limpa):** o programa **não deve exibir unidades que possuam valor zero**.
   - Por exemplo, se o total de segundos for `3665`, o programa deve exibir apenas **1 Hora, 1 Minuto e 5 Segundos**. Não deve aparecer "0 Anos" ou "0 Dias".

---

## Exercício 2 — Simulador de Investimentos Mensais (5 pontos)

Um banco oferece três modalidades de investimento com diferentes taxas de rendimento e regras de entrada. Escreva um programa em linguagem C que leia o **tipo de investimento** (`1` para Poupança, `2` para Renda Fixa e `3` para Ações) e o **valor inicial** a ser investido. O programa deve calcular e exibir o **saldo final após N meses** de aplicação (`N` recebido do usuário), seguindo as regras abaixo:

**1. Regras de Rendimento:**

| Modalidade   | Rendimento mensal (sobre o valor inicial) |
| ------------ | ----------------------------------------- |
| Poupança     | 0,7%                                      |
| Renda Fixa   | 1,2%                                      |
| Ações        | 2,0%                                      |

**2. Taxas e Restrições (apenas para Ações):**

- O investimento em Ações só é permitido para valores iniciais **superiores a R$ 1.000,00**. Caso o usuário tente investir um valor menor, o programa deve exibir `"Investimento Não Permitido"`.
- Para a modalidade Ações, é cobrada uma **Taxa de Custódia mensal de R$ 20,00**. Esta taxa deve ser subtraída do lucro obtido **antes** de somar ao saldo final.

**3. Saída:** exiba o **lucro obtido** e o **saldo final**.

---

## Exercício 3 — Simulação de Proliferação Biológica (Fibonacci) (7,5 pontos)

Em um estudo de sistemas complexos, um aluno da Engenharia da Computação precisa modelar o crescimento de uma população de microrganismos que se reproduz seguindo a lógica da **Sequência de Fibonacci**. Nesta sequência, a população de um determinado dia é sempre a soma das populações dos dois dias anteriores.

Escreva um programa em linguagem C que:

1. **Entrada de Dados:** solicite ao usuário um número inteiro positivo `N`, que representa a quantidade de dias (termos) que deseja monitorar.
2. **Tratamento de Exceções:**
   - Se o usuário digitar `N = 0`, exibir: `"Nenhum dado para monitorar"`.
   - Se digitar `N = 1`, exibir apenas o primeiro termo: `0`.
3. **Processamento com Laço:** para valores de `N >= 2`, utilize **obrigatoriamente** um comando de repetição para calcular e imprimir os `N` primeiros termos da sequência.
   - **Regra da Sequência:** comece com `0` e `1`. Os próximos termos são a soma dos dois anteriores (ex.: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...).
4. **Requisito de Memória:** utilize variáveis distintas para armazenar o valor **anterior**, o **atual** e o **próximo** termo, garantindo a atualização correta a cada iteração do laço.

**Exemplo de Execução (N = 7):**

```
0, 1, 1, 2, 3, 5, 8
```

---

## Exercício 4 — Censo de Recursos Humanos (7,5 pontos)

O setor de RH de uma empresa em expansão em Divinópolis precisa de um relatório estatístico sobre o perfil de seus colaboradores. Para isso, você deve desenvolver um programa em linguagem C que processe os dados de um grupo **indeterminado** de funcionários.

O programa deve ler, para cada funcionário, a **idade**, o **sexo** (`M` para masculino, `F` para feminino) e o **salário**. A leitura deve ser encerrada assim que uma **idade negativa** for digitada. *(Não permitir nenhuma idade inferior a 18 anos.)*

Ao final da execução, o algoritmo deve calcular e exibir:

1. **Estatística Salarial:** a média salarial de todo o grupo de funcionários cadastrados.
2. **Amplitude Etária:** a maior e a menor idade encontradas no grupo.
3. **Filtro de Perfil:** a quantidade total de pessoas que recebem salário **acima de R$ 5.000,00** e possuem **menos de 30 anos**.
4. **Análise de Diversidade:** o percentual de **mulheres** (sexo `F`) em relação ao total de funcionários informados.
