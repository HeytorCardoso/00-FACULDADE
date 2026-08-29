#include <stdio.h>

char c_arquivo[25] = "controle.txt";

int gravar_arquivo(char nome[150], int matricula, float salario){
    char f_arquivo[150] = {""};
    sprintf(f_arquivo, "%d.txt", matricula);
    FILE *arquivo;
    arquivo = fopen(f_arquivo, "w");
    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo na fase de escrita.");
        return 1;
    }
    fprintf(arquivo, "Nome: %s\nMatricula: %d\nSalario: %f\n", nome, matricula, salario);
    fclose(arquivo);

    return 0;
}

int salvar_matricula(int matricula){
    FILE *arquivo;
    arquivo = fopen(c_arquivo, "a");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo na fase de gravacao da matricula.");
    }
    fprintf(arquivo, "%d\n", matricula);
    fclose(arquivo);

    return 0;
}

int remover_funcionario(int matricula_remover){
    char temp_arquivo[25] = "temp.txt";
    int aux = 0;
    char c_remover[150] = {""};
    int matricula = 0;
    FILE *arquivo;
    FILE *arquivo_temp;
    arquivo = fopen(c_arquivo, "r");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo na fase de remocao.");
    }
    arquivo_temp = fopen(temp_arquivo, "a");
    while(fscanf(arquivo, "%d", &matricula) == 1){
        if(matricula_remover == matricula){
            sprintf(c_remover, "%d.txt", matricula_remover);
            remove(c_remover);
            aux = 1;
        } else{
            fprintf(arquivo_temp, "%d\n", matricula);
        }
    }
    fclose(arquivo_temp);
    fclose(arquivo);
    remove(c_arquivo);
    rename("temp.txt", "controle.txt");
    if(aux == 0){
        printf("Funcionario nao encontrado!");
    }
    
    return 0;
}

int main (){
    char nome[150] = {""};
    int matricula = 0;
    float salario = 0;
    int opcao = 2;

    do{
        opcao = 2;
        printf("\nSistema Academico - Digite uma das opcoes abaixo:\n1 - Cadastrar funcionario.\n2 - Remover funcionario\n0 - Sair\n");
        scanf("%d", &opcao);

        if(opcao == 1){
            printf("Digite o nome do funcionario: ");
            scanf("%s", nome);
            printf("Digite a matricula do funcionario: ");
            scanf("%d", &matricula);
            printf("Digite o salario do funcionario: ");
            scanf("%f", &salario);

            salvar_matricula(matricula);
            gravar_arquivo(nome, matricula, salario);
        } else if (opcao == 2){
            printf("Digite o numero da matricula do funcionario a ser removido: ");
            scanf("%d", &matricula);
            remover_funcionario(matricula);
        }
    } while (opcao != 0);

    return 0;
}