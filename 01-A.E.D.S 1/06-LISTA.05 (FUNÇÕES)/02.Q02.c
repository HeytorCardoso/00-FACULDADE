#include <stdio.h>

int tam = 5;

int media(int vetor[tam]){
    int aux = 0;
    
    for(int i=0; i<tam; i++){
        aux = aux + vetor[i];
    }

    int media = aux / tam;
    printf("A média dos valores eh igual a: %d", media);

    return 0;
}

int main(){
    int vetor[tam];

    for(int i=0; i<tam; i++){
        printf("Digite o valor do %do termo do vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    media(vetor);

    return 0;
}