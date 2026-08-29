#include <iostream>

using namespace std;
int tam_dados = 5;
int dados[5];
int qtd = 0;

int adicionar() {
    if(qtd==tam_dados){
        cout<<"\nLista Cheia!";
    }else{
        int x = 0;
        cout<<"\nDigite o valor desejado:  ";
        cin>>x;
        if (qtd == 0){
            dados[0] = x;
        }else{
            int pos = -1;
            for(int i=0; i<tam_dados; i++){
                if(dados[i] > x){
                    pos = i;
                    break;
                }
            }
            if(pos == -1){
                dados[qtd] = x;
            } else{
                for(int i=qtd; i>pos; i--){
                    dados[i] = dados[i-1];
                }
                dados[pos] = x;
            }
        }
        qtd++;
    }
    return 0;
}

int remover(){
    if(qtd==0){
        cout<<"\nLista Vazia!";
    }else if (qtd==1){
        dados[0] = 0;
        qtd--;
    }else{
        int x = 0;
        cout<<"\nDigite o valor desejado:  ";
        cin>>x;

        int pos = -1;
        for(int i=0; i<qtd; i++){
            if(dados[i] == x){
                pos = i;
            }
        }
        if(pos == -1){
            cout<<"\nValor nao encontrado!";
            return 0;
        }
        for(int i=pos; i<qtd; i++){
            dados[i] = dados[i+1];
        }
        qtd--;
    }
    return 0;
}

int imprimir(){
    if(qtd==0){
        cout<<"\nLista Vazia!";
    }else{
        cout<<"\n";
        for(int i=0; i<qtd; i++){
            cout<<"|"<<dados[i]<<"|";
        }
    }
    return 0;
}

int main(){
    int selec = 0;
    do {
        cout<<"\n\nSelecione uma das opcoes abaixo:\n1-Adicionar\n2-Remover\n3-Imprimir\n0-Sair\n";
        cin>>selec;
        if(selec == 1){
            adicionar();
            selec = -1;
        }else if(selec == 2){
            remover();
            selec = -1;
        }else if(selec == 3){
            imprimir();
            selec = -1;
        }else if(selec == 0){
            break;
        }
    }while(selec != 1 and selec != 3 and selec != 0);
    return 0;
}