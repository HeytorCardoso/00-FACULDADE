#include <stdio.h>
#include <string.h>

int main(){
    char palavra[150];
    int vogais = 0;
    int consoantes = 0;

    printf("Digite o texto desejado: \n");
    fgets(palavra, 150, stdin);

    for(int i=0; i<(strlen(palavra)-1); i++){
        if(palavra[i] == 'a' || palavra[i] == 'A' || palavra[i] == 'e' || palavra[i] == 'E' || palavra[i] == 'i' || palavra[i] == 'I' || palavra[i] == 'o' || palavra[i] == 'O' || palavra[i] == 'u' || palavra[i] == 'U'){
            vogais++;
        } else if (((int)palavra[i] >= 65 && (int)palavra[i] <= 90) || ((int)palavra[i] >= 97 && (int)palavra[i] <= 122)){
            consoantes++;
        }
    }

    printf("A string digitada foi: %s\nE ela possui %d vogais e %d consoantes", palavra, vogais, consoantes);

    return 0;
}