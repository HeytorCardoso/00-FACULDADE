#include <stdio.h>

int tam = 150;

int cont_letras(char texto[tam]){
    int q_caract = 0;
    int repi = 0;

    for(int i=0; texto[i]!='\0'; i++){
        q_caract = 0;
        repi = 0;

        for(int k=i-1; k>=0; k--){
            if(texto[i]==texto[k]){
                repi = 1;
            }
        }
        if(repi == 0){
            if((((int)texto[i]>=(int)'A')&&((int)texto[i]<=(int)'Z')) || (((int)texto[i]>=(int)'a')&&((int)texto[i]<=(int)'z'))){
                for(int j=i+1; texto[j]!='\0'; j++){
                    if(texto[i] == texto[j]){
                        q_caract++;
                    }
                }
                printf("O texto possui %d letras (%c)\n", q_caract+1, texto[i]);
            }
        }
    }

    return 0;
}

int main(){
    char texto[tam];

    printf("Digite o texto desejado: ");
    scanf("%[^\n]", &texto);

    cont_letras(texto);

    return 0;
}