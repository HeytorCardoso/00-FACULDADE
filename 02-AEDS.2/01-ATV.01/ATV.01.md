# Atividade de Aula 01 – Lista Estática Ordenada

Implemente, em **C** ou **C++**, uma **Lista Estática Ordenada** com capacidade para até **10 elementos inteiros**, na qual a **ordem crescente** dos dados e a **contiguidade do vetor** devem ser mantidas rigorosamente a cada operação.

## Descrição

Diferente de uma ordenação realizada após a inserção, a **função de inserção** deve:

- Identificar a posição correta do novo valor;
- Deslocar os elementos maiores uma posição à direita antes de inseri-lo;
- Rejeitar novos dados caso a lista esteja cheia.

A **função de remoção** deve:

- Localizar o elemento solicitado;
- Caso ele exista, deslocar os elementos posteriores uma posição à esquerda, agrupando os dados válidos no início do vetor, sem deixar lacunas.

O programa deve incluir também funções para:

- **Inicializar** a lista;
- **Imprimir** apenas os elementos válidos atualmente armazenados.

## Padronização

Utilize a estrutura contendo:

- `dados[10]` — vetor de inteiros;
- `quantidade` — variável de controle do número de elementos válidos.

## Critérios de Avaliação

Será considerado se o **deslocamento de memória (shift)** foi realizado corretamente em tempo de execução nas inserções e remoções, **sem a utilização de rotinas genéricas de ordenação** de vetores após as operações.
