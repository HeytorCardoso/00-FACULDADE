#include <stdio.h>

int main(){
    char saudacao[100] = "Bom dia, ";
    char nome[50];

    printf("Digite o seu nome: ");
    scanf(" %[^\n]", nome);

    int i = 0;
    while(saudacao[i] != '\0'){
        i++;
    }

    int j = 0;
    while(nome[j] != '\0'){
        saudacao[i] = nome[j];
        i++;
        j++;
    }

    saudacao[i] = '\0';

    printf("%s\n", saudacao);

    return 0;
}
