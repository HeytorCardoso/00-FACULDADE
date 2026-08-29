#include <stdio.h>

int n = 3;

int verificar_2_diag(int matriz[n][n]){
    int validacao = 0;
    for(int i=n; i>0; i--){
        if((matriz[i-1][n-i] % 5) == 0){
            validacao++;
        }
    }

    if(validacao==n){
        printf("Verdadeiro!\n");
    } else{
        printf("Falso!\n");
    }

    return 0;
}

int main(){
    int matriz[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("Digite o valor %d-%d de uma matriz %dx%d: ", i,j,n,n);
            scanf("%d", &matriz[i][j]);
        }
    }

    verificar_2_diag(matriz);

    for(int i=0; i<n; i++){
        printf("| ");
        for(int j=0; j<n; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("|\n");
    }
    
    return 0;
}