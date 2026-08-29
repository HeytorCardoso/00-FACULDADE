#include <stdio.h>

int main () {
    int mapa_tesouro[5][5];
    int valor_aleatorio;
    int valor_sorteado = (int)&valor_aleatorio;
    int controle = 0;
    int aux = 0;
    int nums[6];

    for(int i=0; i<5; i++){
        printf("| ");
        for(int j=0; j<5; j++){
            mapa_tesouro[i][j] = 0;
            printf("%d ", mapa_tesouro[i][j]);
        }
        printf("|\n");
    }
    
    if (valor_sorteado < 0){
        valor_sorteado = valor_sorteado*-1;
    }

    for(int i=10; valor_sorteado>1000000; i*10){
        valor_sorteado = valor_sorteado / i;
    }

    int j = 0;

    for(int i=1000000; i!=1; i=(i/10)){
        controle = (valor_sorteado-((valor_sorteado/i)*i))/(i/10);
        nums[j] = controle;
        j++;
        printf("\n%do valor: %d", j, controle);
    }

    printf("\n Valores sorteados: %d", valor_sorteado);

    j = 0;

    for(int i=0; i<6; i++){
        controle = nums[i];
        if(i!=0){
            aux = j;
        }
        for(j=0; j<controle; j++){
            if(j>3){
                controle = controle-j;
                j=0;
            }
        }
        printf("\nValor: %d", j);
        if (i%2 != 0){
            mapa_tesouro[aux][j] = 1;
            printf("\nNo I = %d - Linha: %d | Coluna: %d", i, aux, j);
        }
    }
    
    for(int i=0; i<5; i++){
        printf("\n| ");
        for(int j=0; j<5; j++){
            printf("%d ", mapa_tesouro[i][j]);
        }
        printf("|\n");
    }
    
    int i = 0;
    int linha = 0;
    int coluna = 0;

    do{
        if(i == 0){
            printf("Bem-Vindo ao caca tesouro, voce tera 3 tentativas para encontrar, digitando a linha primeiro e a coluna depois. Boa sorte!\n");
        }
        printf("--Voce esta na tentativa numero %d!--\n", i+1);
        printf("Digite o numero da linha de seu interesse: ");
        scanf("%d", &linha);
        printf("Digite o numero da coluna de seu interesse: ");
        scanf("%d", &coluna);

        if(mapa_tesouro[linha][coluna] == 0){
            printf("Errou, que pena!\n");
            mapa_tesouro[linha][coluna] = -1;
        } else if (mapa_tesouro[linha][coluna] == 1){
            printf("Parabens, voce encontrou um tesouro!");
            mapa_tesouro[linha][coluna] = 2;
        } else if (mapa_tesouro[linha][coluna] == -1){
            printf("Parece que voce repetiu uma posicao errada!");
        } else {
            printf("Parece que voce repetiu a posicao de um tesouro!");
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