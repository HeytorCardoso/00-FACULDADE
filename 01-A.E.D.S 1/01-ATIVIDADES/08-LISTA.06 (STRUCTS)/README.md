# Atividade de Aula 06 - Structs

---

## 1ª Questão

Crie um programa em C que defina uma estrutura chamada **`Livro`**. Essa estrutura deve armazenar as seguintes informações:

- **Título** (string/array de caracteres);
- **Autor** (string/array de caracteres);
- **Ano de Publicação** (inteiro);
- **Preço** (ponto flutuante — `float` ou `double`).

No seu método `main`, declare uma variável do tipo `Livro`, peça para o usuário digitar os dados desse livro através do teclado (`scanf` ou `fgets`) e, por fim, imprima todos os dados formatados.

---

## 2ª Questão

Uma loja precisa associar cada produto ao seu respectivo fornecedor para facilitar o contato em caso de reposição de estoque. Para isso, crie duas estruturas:

1. **`Fornecedor`**: contendo Nome da Empresa (string) e Telefone de Contato (string);
2. **`Produto`**: contendo Código (inteiro), Nome (string), Preço (`float`), Quantidade (inteiro) e um campo do tipo `Fornecedor`.

O seu programa deve conter um **array de até 20 produtos** e apresentar um menu com as seguintes opções:

- **1. Registrar Produto:** o usuário insere os dados do produto e, logo em seguida, os dados do fornecedor daquele produto;
- **2. Listar Todos os Produtos:** exibe os dados do produto e também o nome e telefone do seu fornecedor;
- **3. Procurar por Fornecedor:** o usuário digita o nome de um fornecedor e o programa lista todos os produtos que são fornecidos por essa empresa.
