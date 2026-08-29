#include <stdio.h>

int analisar_array(int vetor[5], int *max, int *min) {
    for(int i=0; i<5; i++){
        if (i==0){
            *max = *vetor;
            *min = *vetor;
        }
        else{
            if (*vetor > *max){
                *max = *vetor;
            }
            if (*vetor < *min){
                *min = *vetor;
            }
        }
        vetor++;
    }


    return 0;
}

int main () {
    int vetor[5] = {-1, -5, 0, 8, 6};
    int maior = 0;
    int menor = 0;
    analisar_array(vetor, &maior, &menor);
    for(int i=0; i<5; i++){
        printf("%d ", vetor[i]);
    }
    printf("\nMaior: %d\nMenor: %d", maior, menor);
    return 0;
}