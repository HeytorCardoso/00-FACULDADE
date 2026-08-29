#include <stdio.h>

int main (){
    int tam_v = 5;
    int valores[tam_v];
    int q_distintos = 0;
    int q_repetidos = 0;
    int num_mais = 0;
    int num_menos = 0;
    int q_num_mais = -1;
    int q_num_menos = 100000;
    int repetidos[tam_v];
    int distintos[tam_v];

    //Obter valores
    for(int i=0; i<tam_v; i++){
        printf("Digite o valor do %do numero do array: ", i);
        scanf("%d", &valores[i]);
    }
        
    //Ordenar vetor
    for(int i=0; i < tam_v; i++){
        for(int j=i+1; j < (tam_v-1); j++){
            if(valores[i] > valores[j]){
                int aux = 0;
                aux = valores[i];
                valores[i] = valores[j];
                valores[j] = aux;
            }
        }
    }

    //Lógica de distintos e repetidos
    for(int i=0; i < tam_v+1; i++){
        if(i==0){
            num_mais = valores[i];
            num_menos = valores[i];
        }
        if(valores[i] != valores[i-1]){
            if(i!=0){
                printf("O numero %d apareceu %d vezes no vetor.\n", valores[i-1], q_repetidos+1);
            }            
            if(q_repetidos == 1){
                printf("O numero %d aparece exatamente 2 vezes!\n", valores[i-1]);
            } else if (q_repetidos > 1) {
                printf("O numero %d aparece mais de 2 vezes!\n", valores[i-1]);
            }
            if(q_repetidos>q_num_mais){
                num_mais = valores[i-1];
                q_num_mais = q_repetidos;
            }
            if(q_repetidos<=q_num_menos && i!=0){
                num_menos = valores[i-1];
                q_num_menos = q_repetidos;
            }
            q_repetidos = 0;
            q_distintos++;
            distintos[q_distintos-1] = valores[i];
        } else {
            q_repetidos++;
            repetidos[q_repetidos-1] = valores[i];
        }
    }

    q_distintos--;
    printf("O numero %d foi o que mais apareceu. Com %d aparicoes.\n", num_mais, q_num_mais+1);
    printf("O numero %d foi o que menos apareceu. Com %d aparicoes.\n", num_menos, q_num_menos+1);

    //Exibir valores
    for(int i=0; i<tam_v; i++){
        printf("(%d) ", valores[i]);
    }
    printf("\nDistintos totais: %d, eles sao: ", q_distintos);
    for(int i=0; i<q_distintos; i++){
        printf("(%d) ", distintos[i]);
    }

    return 0;
}