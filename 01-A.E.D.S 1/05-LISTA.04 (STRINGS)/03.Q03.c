#include <stdio.h>

int main(){
    int tam = 150;
    char entrada[tam];
    char copia[tam];

    printf("Digite o texto desejado: ");
    scanf("%[^\n]", &entrada);

    for(int i=0; i<tam; i++){
        if(entrada[i]=='\0'){
            copia[i] = entrada[i];
            break;
        }
        copia[i] = entrada[i];
    }

    printf("A string de copia ficou: %s", copia);

    return 0;
}