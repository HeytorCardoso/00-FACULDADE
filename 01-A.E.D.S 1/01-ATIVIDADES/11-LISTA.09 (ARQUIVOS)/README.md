# Atividade de Aula 09 – Arquivos

---

## 1ª Questão

Um sistema acadêmico simplificado armazena as informações de funcionários em um arquivo de texto chamado **`funcionarios.txt`**. Os dados são organizados estritamente em blocos de **3 linhas** para cada funcionário, seguindo o padrão abaixo:

- **Linha 1:** Nome do funcionário (string/vetor de caracteres, contendo espaços);
- **Linha 2:** Número de matrícula (armazenado como texto no arquivo, mas que representa um número inteiro);
- **Linha 3:** Salário bruto (armazenado como texto no arquivo, mas que representa um valor de ponto flutuante/`float`).

Escreva um programa completo em linguagem C que realize as seguintes operações:

1. **Gravação e Adição (*Append*):** o programa deve abrir o arquivo `funcionarios.txt` de modo que permita adicionar novos dados ao final do arquivo, **sem apagar** o conteúdo existente. Solicite ao usuário o nome, a matrícula e o salário de um novo funcionário e grave-os no arquivo, respeitando a estrutura de uma informação por linha;
2. **Leitura e Conversão:** em seguida, feche e reabra o arquivo em modo de leitura. O programa deve ler todo o arquivo linha a linha (em blocos de 3 linhas). Para cada bloco lido, converta a string da matrícula para o tipo `int` e a string do salário para o tipo `float` utilizando funções de conversão adequadas;
3. **Exibição:** imprima na tela os dados formatados de todos os funcionários lidos, mostrando o salário com **duas casas decimais**;
4. **Folha de Pagamento Total:** ao final, demonstre **quantos funcionários** a empresa tem e qual a **soma do salário** de todos eles.

---

## 2ª Questão

Para melhorar a eficiência e a organização do sistema, a abordagem mudou. Agora, cada funcionário possui seu próprio **arquivo individual** de dados, nomeado diretamente com o número de sua matrícula (ex.: o funcionário de matrícula `28` terá seus dados salvos em `28.txt`; o de matrícula `56` em `56.txt`).

Dentro de cada arquivo individual (ex.: `28.txt`), os dados são salvos em 3 linhas simples:

- **Linha 1:** Nome (string);
- **Linha 2:** Matrícula (inteiro);
- **Linha 3:** Salário (`float`).

Para controlar quais funcionários existem no sistema, há um arquivo centralizador chamado **`controle.txt`**. Cada linha desse arquivo contém apenas o número de uma matrícula ativa no sistema.

**Exemplo do arquivo `controle.txt`:**

```
28
56
102
```

Desenvolva um programa em C que apresente um menu com duas opções principais para gerenciar esse sistema:

### 1. Opção 1 — Cadastrar Funcionário

Solicite ao usuário o Nome, a Matrícula (`int`) e o Salário (`float`).

- Crie dinamicamente o arquivo individual do funcionário utilizando a matrícula para compor o nome do arquivo (**Dica:** use `sprintf` para gerar a string do nome do arquivo, como `"28.txt"`). Salve os dados informados nele;
- Abra o arquivo `controle.txt` em modo de adição (`"a"`) e insira uma nova linha contendo apenas o número da matrícula cadastrada.

### 2. Opção 2 — Remover Funcionário

- Solicite ao usuário a matrícula do funcionário que deseja remover;
- O programa deve ler o arquivo `controle.txt` linha a linha. Se a matrícula for encontrada, essa linha deve ser removida do controle;
- Além de remover a matrícula do arquivo de controle, o programa deve **deletar fisicamente** o arquivo individual do funcionário (ex.: `28.txt`) do disco utilizando a função `remove()`;
- Caso a matrícula não exista no controle, exiba a mensagem `"Funcionário não encontrado"`.
