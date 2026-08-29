#include <stdio.h>
#include <stdlib.h>

int main (){
    int N = 0;
    int *array1 = NULL;
    int *array2 = NULL;

    printf("Digite o tamanho do array: ");
    scanf("%d", &N);

    array1 = (int*) malloc(N * sizeof(int));
    if (array1 == NULL){
        printf("Erro de alocacao de memoria.\n");
        return 1;
    }

    for(int i = 0; i < N; i++){
        printf("Digite o valor para o elemento %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    array2 = (int*) malloc(N * sizeof(int));
    if (array2 == NULL){
        printf("Erro de alocacao de memoria.\n");
        free(array1);
        return 1;
    }

    for(int i = 0; i < N; i++){
        array2[i] = array1[i] * 2;
    }

    printf("\nElementos do segundo array (multiplicados por 2):\n");
    for(int i = 0; i < N; i++){
        printf("%d ", array2[i]);
    }
    printf("\n");

    free(array1);
    free(array2);

    return 0;
}
