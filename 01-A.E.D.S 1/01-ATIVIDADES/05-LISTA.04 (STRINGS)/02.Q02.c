#include <stdio.h>
#include <string.h>

int main(){
    char palavra[150];
    char palavrac[150];
    int controle = 0;

    printf("Digite a palavra para verificar se é um palindromo: \n");
    fgets(palavra, 150, stdin);

    strncpy(palavrac, palavra, 150);

    for(int i=(strlen(palavrac)-2); i>=0; i--){
        palavrac[controle] = palavra[i];
        controle++;
    }

    if(strcmp(palavra, palavrac) == 0){
        printf("A string (%s) eh um palindromo!", palavra);
    } else{
        printf("A string (%s) nao eh um palindromo", palavra);
    }

    return 0;
}