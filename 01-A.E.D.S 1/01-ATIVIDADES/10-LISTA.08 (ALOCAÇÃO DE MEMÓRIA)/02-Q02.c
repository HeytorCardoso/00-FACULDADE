#include <stdio.h>
#include <stdlib.h>

int main (){
    int capacidade = 3;
    int cont = 0;
    float *notas = NULL;
    float temp_nota = 0;
    float soma = 0;
    float media = 0;

    notas = (float*) malloc(capacidade * sizeof(float));
    if (notas == NULL){
        printf("Erro de alocacao de memoria.\n");
        return 1;
    }

    while (1){
        printf("Digite a nota do aluno (negativo para parar): ");
        scanf("%f", &temp_nota);

        if (temp_nota < 0){
            break;
        }

        if (cont == capacidade){
            capacidade += 3;
            float *temp = (float*) realloc(notas, capacidade * sizeof(float));
            if (temp == NULL){
                printf("Erro de realocacao de memoria.\n");
                free(notas);
                return 1;
            }
            notas = temp;
        }

        notas[cont] = temp_nota;
        cont++;
    }

    if (cont > 0){
        for(int i = 0; i < cont; i++){
            soma += notas[i];
        }
        media = soma / cont;
        printf("Media das notas: %0.2f\n", media);
    } else {
        printf("Nenhuma nota digitada.\n");
    }

    free(notas);

    return 0;
}
