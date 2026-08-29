#include <stdio.h>

int inverter_palavra (char frase[50]){
    char *invertida = frase;
    while (*invertida != '\0'){
        invertida++;
    }
    invertida--;
    
    while(frase < invertida){
        char aux = *frase;
        *frase = *invertida;
        *invertida = aux;
        frase++;
        invertida--;
    }

    return 0;
}

int main(){
    char frase[50] = "Ponteiros";
    printf("Palavra antes da troca: %s", frase);
    inverter_palavra(frase);
    printf("\nPalavra depois da troca: %s", frase);

    return 0;
}