#include <stdio.h>
#include <string.h>

struct Fornecedor {
    char nome[100];
    char telefone[30];
};

struct Produto {
    int codigo;
    char nome[100];
    float preco;
    int quantidade;
    struct Fornecedor fornecedor;
};

int main (){
    struct Produto produtos[20];
    int total_produtos = 0;
    int opcao = -1;
    char fornecedor_busca[100] = {""};

    do{
        printf("\nMenu - Escolha uma opcao:\n");
        printf("1 - Registrar Produto\n");
        printf("2 - Listar Todos os Produtos\n");
        printf("3 - Procurar por Fornecedor\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        if(opcao == 1){
            if(total_produtos < 20){
                printf("\nDigite o codigo do produto: ");
                scanf("%d", &produtos[total_produtos].codigo);

                printf("Digite o nome do produto: ");
                scanf(" %[^\n]", produtos[total_produtos].nome);

                printf("Digite o preco do produto: ");
                scanf("%f", &produtos[total_produtos].preco);

                printf("Digite a quantidade do produto: ");
                scanf("%d", &produtos[total_produtos].quantidade);

                printf("Digite o nome da empresa fornecedora: ");
                scanf(" %[^\n]", produtos[total_produtos].fornecedor.nome);

                printf("Digite o telefone de contato do fornecedor: ");
                scanf(" %[^\n]", produtos[total_produtos].fornecedor.telefone);

                total_produtos++;
                printf("Produto registrado com sucesso!\n");
            } else{
                printf("Limite de produtos atingido!\n");
            }
        } else if(opcao == 2){
            if(total_produtos == 0){
                printf("\nNenhum produto cadastrado.\n");
            } else{
                printf("\n-- PRODUTOS CADASTRADOS --\n");
                for(int i=0; i<total_produtos; i++){
                    printf("\nProduto %d:\n", i+1);
                    printf("Codigo: %d\n", produtos[i].codigo);
                    printf("Nome: %s\n", produtos[i].nome);
                    printf("Preco: %.2f\n", produtos[i].preco);
                    printf("Quantidade: %d\n", produtos[i].quantidade);
                    printf("Fornecedor: %s\n", produtos[i].fornecedor.nome);
                    printf("Telefone: %s\n", produtos[i].fornecedor.telefone);
                }
                printf("\n");
            }
        } else if(opcao == 3){
            if(total_produtos == 0){
                printf("\nNenhum produto cadastrado.\n");
            } else{
                printf("\nDigite o nome do fornecedor que deseja buscar: ");
                scanf(" %[^\n]", fornecedor_busca);
                int achou = 0;
                printf("\n-- PRODUTOS DO FORNECEDOR: %s --\n", fornecedor_busca);
                for(int i=0; i<total_produtos; i++){
                    if(strcmp(produtos[i].fornecedor.nome, fornecedor_busca) == 0){
                        printf("\nCodigo: %d\n", produtos[i].codigo);
                        printf("Nome: %s\n", produtos[i].nome);
                        printf("Preco: %.2f\n", produtos[i].preco);
                        printf("Quantidade: %d\n", produtos[i].quantidade);
                        achou = 1;
                    }
                }
                if(achou == 0){
                    printf("Nenhum produto encontrado para este fornecedor.\n");
                }
                printf("\n");
            }
        }
    } while(opcao != 0);

    return 0;
}
