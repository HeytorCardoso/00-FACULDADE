#include <stdio.h>

char c_arquivo[25] = "arquivo.txt";

int ler_arquivo(){
    printf("\n");
    char nome[250] = {""};
    int matricula = 0;
    float salario = 0;
    int cont = 0;
    float soma_salario = 0;
    FILE *arquivo;
    arquivo = fopen(c_arquivo, "r");
    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo na fase de leitura.");
        return 1;
    }
    printf("--REGISTROS DOS FUNCIONARIOS--");
    while (fscanf(arquivo, " Nome: %s Matricula: %d Salario: %f", nome, &matricula, &salario) == 3){
        printf("\nNome: %s\nMatricula: %d\nSalario: %0.2f\n", nome, matricula, salario);
        cont++;
        soma_salario = soma_salario + salario;
    }
    printf("--FIM DOS REGISTROS--\n");
    printf("\n--RESUMO--\n");
    printf("Total de funcionarios: %d\n", cont);
    printf("Soma dos salarios: %0.2f\n", soma_salario);
    fclose(arquivo);

    return 0;
}

int gravar_arquivo(char nome[150], int matricula, float salario){
    FILE *arquivo;
    arquivo = fopen(c_arquivo, "a");
    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo na fase de escrita.");
        return 1;
    }
    fprintf(arquivo, "\nNome: %s\nMatricula: %d\nSalario: %f", nome, matricula, salario);
    fclose(arquivo);

    return 0;
}

int main (){
    char nome[150] = {""};
    int matricula = 0;
    float salario = 0;
    int opcao = 2;

    do{
        opcao = 2;
        printf("\nSistema Academico - Digite uma das opcoes abaixo:\n1 - Adicionar um registro.\n2 - Ler o arquivo\n0 - Sair\n");
        scanf("%d", &opcao);

        if(opcao == 1){
            printf("Digite o nome do funcionario: ");
            scanf("%s", &nome);
            printf("Digite a matricula do funcionario: ");
            scanf("%d", &matricula);
            printf("Digite o salario do funcionario: ", &salario);
            scanf("%f", &salario);

            gravar_arquivo(nome, matricula, salario);
        } else if (opcao == 2){
            ler_arquivo();
        }
    } while (opcao != 0);

    return 0;
}