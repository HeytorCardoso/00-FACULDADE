#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int mapa_tesouro[5][5];
    int aux_1 = -1;
    int aux_2 = -1;
    srand(time(NULL));

    for(int i=0; i<5; i++){
        printf("| ");
        for(int j=0; j<5; j++){
            mapa_tesouro[i][j] = 0;
            printf("%d ", mapa_tesouro[i][j]);
        }
        printf("|\n");
    }

    for(int i=0; i<3; i++){
        aux_1 = (rand()%4)+0;
        aux_2 = (rand()%4)+0;
        if(mapa_tesouro[aux_1][aux_2] == 1){
            while(mapa_tesouro[aux_1][aux_2] == 1){
                aux_1 = (rand()%4)+0;
                aux_2 = (rand()%4)+0;
            }
            mapa_tesouro[aux_1][aux_2] = 1;
        } else {
            mapa_tesouro[aux_1][aux_2] = 1;
        }
    }
    
    int i = 0;
    int linha = 0;
    int coluna = 0;

    do{
        if(i == 0){
            printf("Bem-Vindo ao caca tesouro, voce tera 3 tentativas para encontrar, digitando a primeiro a linha e depois a coluna. Utilize valores entre 0 e 4. Boa sorte!\n");
        }

        printf("--Voce esta na tentativa numero %d!--\n", i+1);

        do{
            printf("Digite o numero da linha de seu interesse: ");
            scanf("%d", &linha);
            printf("Digite o numero da coluna de seu interesse: ");
            scanf("%d", &coluna);
            if ((linha > 4 ) || (linha < 0) || (coluna > 4) || (coluna < 0)){
                printf("Valores invalidos digitados. Digite valores entre 0 e 4.\n");
            }
        } while ((linha > 4 ) || (linha < 0) || (coluna > 4) || (coluna < 0));

        if(mapa_tesouro[linha][coluna] == 0){
            printf("Errou, que pena!\n");
            mapa_tesouro[linha][coluna] = -1;
        } else if (mapa_tesouro[linha][coluna] == 1){
            printf("Parabens, voce encontrou um tesouro!\n");
            mapa_tesouro[linha][coluna] = 2;
        } else if (mapa_tesouro[linha][coluna] == -1 || mapa_tesouro[linha][coluna] == 2){
            printf("Voce digitou uma posicao conhecida, tente novamente!\n");
            i--;
        } else {
            printf("Voce digitou uma posicao invalida, tente novamente!\n");
            i--;
        }
        i++;
    } while(i<3);

    for(int i=0; i<5; i++){
        printf("| ");
        for(int j=0; j<5; j++){
            printf("%d ", mapa_tesouro[i][j]);
        }
        printf("|\n");
    }

    return 0;
}