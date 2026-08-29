#include <stdio.h>

int main(){
    int tam = 150;
    char texto[tam];

    printf("Digite o texto desejado: ");
    scanf("%[^\n]", &texto);

    int i = 0;
    for(i=0; texto[i]!='\0'; i++){
    }

    printf("O total de caracteres da palavra (%s) sao: %d", texto, i);

    return 0;
}