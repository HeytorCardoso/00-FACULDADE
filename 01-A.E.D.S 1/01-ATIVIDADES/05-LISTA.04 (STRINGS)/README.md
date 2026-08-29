# Atividade de Aula 04 - Strings

---

## 1ª Questão — Contar Vogais e Consoantes

Escreva um programa em C que leia uma **string** (palavra ou frase) digitada pelo usuário e conte quantas **vogais** e quantas **consoantes** ela possui. Ignore espaços e considere apenas letras do alfabeto.

**Exemplo:**

```
Entrada: "Exemplo de Texto"
Saída:   Vogais: 6 | Consoantes: 8
```

---

## 2ª Questão — Verificação de Palíndromo

Crie um programa que leia uma palavra e verifique se ela é um **palíndromo**, ou seja, se pode ser lida da mesma forma de trás para frente. Desconsidere letras maiúsculas/minúsculas.

**Exemplo:**

```
"arara" -> palíndromo
"casa"  -> não é palíndromo
```

---

## 3ª Questão — Clonando Dados (Cópia de String)

Crie um programa que declare um array de caracteres chamado `entrada` com uma frase de sua escolha (ex.: `"Estruturas de Dados"`). Em seguida, declare um segundo array chamado `copia`. Utilizando um **laço de repetição**, transporte cada letra da `entrada` para a `copia`.

- **Regra de Ouro:** lembre-se de que o computador só sabe onde uma frase termina por causa do caractere `\0`. Certifique-se de inseri-lo **manualmente** no final do seu array `copia`.

---

## 4ª Questão — O Contador Manual (Tamanho da String)

Escreva um programa que leia uma palavra do teclado usando `scanf`. **Sem usar funções prontas**, conte quantos caracteres essa palavra possui e exiba o resultado na tela.

- **Dica:** o seu laço deve percorrer o array e parar imediatamente quando encontrar o caractere nulo (`\0`).

---

## 5ª Questão — Unindo Forças (Concatenação)

Declare dois arrays: `saudacao` contendo `"Bom dia, "` e `nome` contendo um nome lido pelo teclado. O seu objetivo é **juntar** as duas informações dentro do array `saudacao`.

1. Encontre em qual posição do array `saudacao` está o caractere `\0`;
2. A partir dessa posição, comece a gravar os caracteres do array `nome`;
3. Ao terminar, finalize a nova frase com `\0` e imprima o resultado.

---

## 6ª Questão — Verificador de Senhas (Comparação)

Crie um programa que tenha uma senha gravada em um array (ex.: `char senhaMestra[] = "1234abc";`). Peça para o usuário digitar uma tentativa de senha. O programa deve comparar as duas, **posição por posição**:

- Se encontrar um caractere diferente, o programa deve avisar que as senhas **não coincidem**;
- As senhas só são iguais se **todos** os caracteres forem idênticos e se ambas terminarem no `\0` ao mesmo tempo.

---

## 7ª Questão — Limpeza de Texto (Filtragem)

Imagine que você recebeu uma string "suja" com números no meio, como: `"Pr0gr4m4çã0"`.

Escreva um código que percorra essa string e copie para um **novo array** apenas o que for **letra**, ignorando os números. Ao final, imprima a frase "limpa".

- **Dica:** use a tabela ASCII ou compare se o caractere está entre `'0'` e `'9'`.
