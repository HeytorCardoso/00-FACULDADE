# 1ª Avaliação

---

## Instruções Gerais

- O **cabeçalho** dos códigos deve constar apenas no início do **primeiro** código; desconsiderar para os demais.
- Para todos os exercícios, partir da ideia de que as estruturas **Pilha Estática**, **Fila Circular Estática**, **Pilha Dinâmica**, **Fila Dinâmica** e **Lista Dinâmica** já estão implementadas. Seu papel é apenas criar os **métodos** ou **estruturas** solicitados.
- Todas as estruturas dinâmicas podem ser tratadas como **unicamente encadeadas** ou **duplamente encadeadas**.

---

## Exercício 1: Controle de Logística *(10 pontos)*

Em uma central de logística de uma fábrica de autopeças, as caixas de **peças comuns** que chegam da esteira são armazenadas em uma **Fila Circular Estática (FilaCE)**. Já as caixas de **peças prioritárias**, enviadas para ajustes rápidos, são empilhadas em uma **Pilha Estática (PilhaE)**.

Para organizar o envio dessas peças para o setor de embalagem, você deve criar uma nova classe chamada **`GerenciadorLogistico`**. Essa classe terá dentro dela uma instância de `FilaCE` e uma instância de `PilhaE`, ambas com capacidade máxima para **10 elementos**.

A classe deve possuir um método de remoção e processamento chamado **`processarProximoLote()`**, que funciona seguindo a seguinte **Regra Proporcional de Consumo**:

- **Regra de Consumo:** cada lote de processamento deve tentar retirar **2 peças da FilaCE** e **1 peça da PilhaE**. Caso alguma estrutura tenha menos elementos que o mínimo necessário, devem ser removidos o que for possível naquele momento.

**Premissas do Sistema:**

- As classes `FilaCE` e `PilhaE` já estão completamente implementadas e prontas para uso. Ambas possuem capacidade de 10 elementos.

**Sua Tarefa:**

Desenvolva em C/C++ o código da classe `GerenciadorLogistico`. Sua solução deve conter:

- A estrutura da classe `GerenciadorLogistico` com seus **atributos privados** e os **protótipos** dos métodos públicos.
- O **Construtor** e o **Destrutor** da classe.
- O método `processarProximoLote()`, que realiza a retirada respeitando a regra de consumo. Trate também os casos em que a fila ou a pilha não possuam elementos suficientes no momento da retirada.

---

## Exercício 2: Mover o Menor Elemento para o Início da Fila Dinâmica *(5 pontos)*

Implemente um método **`promoverMenor()`** para a `FilaDinamica`. O algoritmo deve localizar o nó que possui o **menor valor** da fila.

Em vez de apenas trocar o **conteúdo** do nó, você deve **desconectar** o nó de sua posição atual reajustando os ponteiros dos nós vizinhos e **reconectá-lo** como o novo **primeiro** nó da fila.

> Fica a sua escolha se está trabalhando Fila Dinâmica Unicamente Encadeada ou Duplamente Encadeada.

---

## Exercício 3: Mediana Pilha Dinâmica *(10 pontos)*

A **mediana** é o valor central de um conjunto de dados **ordenado**. Lembrando que a Pilha **não** é uma estrutura ordenada.

- Se a quantidade de elementos for **ímpar**, a mediana é exatamente o valor que ocupa a posição do meio.
- Se a quantidade de elementos for **par**, a mediana é a **média aritmética** dos dois valores centrais.

Em um sistema de análise de dados, as leituras recebidas são armazenadas em uma **Pilha Dinâmica Encadeada (PilhaDinamica)**.

Desenvolva o método **`inserirPontoDeCalibracao()`** para a classe `PilhaDinamica`. O método deve analisar os elementos armazenados na pilha, calcular a **mediana** deles e realizar a inserção de um novo nó seguindo a regra:

- Se a mediana calculada **já estiver** na pilha, empilhe um novo nó com o valor **2026**.
- Se a mediana calculada **não estiver** na pilha, empilhe um novo nó com o valor **2027**.

**Observações:**

- Se a pilha estiver **vazia**, exiba uma mensagem de aviso e interrompa a execução sem realizar inserções.
- Mantenha o **gerenciamento de memória** e a **integridade da estrutura encadeada** (alocação de nós e reajuste dos ponteiros de topo) corretos.

---

## Exercício 4: Reorganização do Maior e Menor Elemento por Ponteiros *(5 pontos)*

Em uma **Lista Dinâmica**, conforme vimos na disciplina, implemente o método **`moverMaiorEMenorParaOMeio()`**. Lembrando que a Lista é **ordenada**.

O método deve localizar o nó contendo o **maior valor** e o nó contendo o **menor valor** da lista e realocá-los para o **meio** da estrutura, reajustando unicamente os **ponteiros de encadeamento**.

**Regras:**

- **Proibido** criar novos nós ou reinserir elementos.
- **Proibido** alterar os valores armazenados nos nós existentes. A reorganização deve ser feita exclusivamente alterando os ponteiros.
- O nó com o **maior valor** deve ficar logo **após a primeira metade** da lista, seguido **imediatamente** pelo nó com o **menor valor**.
- Caso a lista possua **menos de 3 elementos**, o método **não** deve realizar nenhuma alteração.
