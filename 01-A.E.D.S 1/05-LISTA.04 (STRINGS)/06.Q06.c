#include <stdio.h>

int main(){
    char senhaMestra[] = "1234abc";
    char tentativa[50];

    printf("Digite a tentativa de senha: ");
    scanf(" %[^\n]", tentativa);

    int iguais = 1;
    int i = 0;

    while(senhaMestra[i] != '\0' || tentativa[i] != '\0'){
        if(senhaMestra[i] != tentativa[i]){
            iguais = 0;
            break;
        }
        i++;
    }

    if(iguais){
        printf("As senhas coincidem.\n");
    } else {
        printf("As senhas nao coincidem.\n");
    }

    return 0;
}
