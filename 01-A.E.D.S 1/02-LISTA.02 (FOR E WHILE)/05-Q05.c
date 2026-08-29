#include <stdio.h>
#include <ctype.h>

int main() {
    char sexo = ' ';
    int idade = 0;
    float peso = 0.0, altura = 0.0, tmb = 0.0;

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);
    sexo = toupper(sexo);

    printf("Digite a idade (anos): ");
    scanf("%d", &idade);

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (cm): ");
    scanf("%f", &altura);

    if (sexo == 'M') {
        tmb = 88.36 + (13.4 * peso) + (4.8 * altura) - (5.7 * idade);
    } else if (sexo == 'F') {
        tmb = 447.6 + (9.2 * peso) + (3.1 * altura) - (4.3 * idade);
    } else {
        printf("\nErro: Sexo inválido. Digite apenas M ou F.\n");
        return 1;
    }

    printf("Taxa Metabólica Basal (TMB): %.2f kcal\n", tmb);

    printf("Classificação: ");
    if (idade <= 25) {
        printf("Metabolismo Acelerado\n");
    } else if (idade >= 26 && idade <= 45) {
        printf("Metabolismo Normal\n");
    } else if (idade >= 46 && idade <= 60) {
        printf("Metabolismo Moderado\n");
    } else {
        printf("Metabolismo Lento\n");
    }

    return 0;
}
