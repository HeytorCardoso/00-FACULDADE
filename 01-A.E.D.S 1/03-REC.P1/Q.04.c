#include <stdio.h>

int main() {
    int idade, maior_idade, menor_idade;
    char sexo;
    float salario, soma_salarios;
    int total_funcionarios = 0;
    int total_mulheres = 0;
    int filtro_perfil = 0;

    soma_salarios = 0;
    maior_idade = 0;
    menor_idade = 200;

    while (1) {
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if (idade < 0) {
            break;
        }

        if (idade < 18) {
            printf("Idade invalida!\n");
            continue;
        }

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Digite o salario: ");
        scanf("%f", &salario);

        soma_salarios = soma_salarios + salario;
        total_funcionarios = total_funcionarios + 1;

        if (idade > maior_idade) {
            maior_idade = idade;
        }
        if (idade < menor_idade) {
            menor_idade = idade;
        }

        if (salario > 5000 && idade < 30) {
            filtro_perfil = filtro_perfil + 1;
        }

        if (sexo == 'F' || sexo == 'f') {
            total_mulheres = total_mulheres + 1;
        }
    }

    if (total_funcionarios > 0) {
        printf("\nMedia salarial: R$ %.2f\n", soma_salarios / total_funcionarios);
        printf("Maior idade: %d\n", maior_idade);
        printf("Menor idade: %d\n", menor_idade);
        printf("Filtro (Salario > 5000 e Idade < 30): %d\n", filtro_perfil);
        printf("Percentual de mulheres: %.2f%%\n", ((float)total_mulheres / total_funcionarios) * 100);
    }

    return 0;
}