#include <stdio.h>

struct Livro {
    char titulo[150];
    char autor[150];
    int ano_publicacao;
    float preco;
};

int main (){
    struct Livro livro;

    printf("Digite o titulo do livro: ");
    scanf(" %[^\n]", livro.titulo);

    printf("Digite o autor do livro: ");
    scanf(" %[^\n]", livro.autor);

    printf("Digite o ano de publicacao: ");
    scanf("%d", &livro.ano_publicacao);

    printf("Digite o preco do livro: ");
    scanf("%f", &livro.preco);

    printf("\n-- DADOS DO LIVRO --\n");
    printf("Titulo: %s\n", livro.titulo);
    printf("Autor: %s\n", livro.autor);
    printf("Ano de Publicacao: %d\n", livro.ano_publicacao);
    printf("Preco: %0.2f\n", livro.preco);

    return 0;
}
