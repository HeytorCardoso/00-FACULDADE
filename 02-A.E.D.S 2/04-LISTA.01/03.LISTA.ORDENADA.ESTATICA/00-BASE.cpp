#include <iostream>

using namespace std;

#define MAX 10

class lista_ord_est{
    private:
        int qtd;
        int vet[MAX];
    public:
        lista_ord_est();
        void adicionar();
        void remover();
        void imprimir();
};

lista_ord_est::lista_ord_est(){
    qtd = 0;
    for(int i=0; i<MAX; i++){
        vet[i] = 0;
    }
}

void lista_ord_est::adicionar(){
    if(qtd == MAX){
        cout<<"\nA lista esta cheia!";
        return;
    }

    int valor = 0;
    cout<<"\nDigite o valor desejado: ";
    cin>>valor;

    int pos = 0;
    while(pos < qtd && vet[pos] < valor){
        pos++;
    }

    for(int i=qtd; i>pos; i--){
        vet[i] = vet[i-1];
    }

    vet[pos] = valor;
    qtd++;
}

void lista_ord_est::remover(){
    if(qtd == 0){
        cout<<"\nA lista esta vazia!";
        return;
    }

    int valor = 0;
    cout<<"\nDigite o valor que deseja remover: ";
    cin>>valor;

    int pos = 0;
    while(pos < qtd && vet[pos] != valor){
        pos++;
    }

    if(pos == qtd){
        cout<<"\nValor nao encontrado!";
        return;
    }

    for(int i=pos; i<qtd-1; i++){
        vet[i] = vet[i+1];
    }

    qtd--;
    vet[qtd] = 0;
    cout<<"\nRemovido com sucesso!";
}

void lista_ord_est::imprimir(){
    if(qtd == 0){
        cout<<"\nA lista esta vazia!";
    }else{
        cout<<"\n";
        for(int i=0; i<qtd; i++){
            cout<<" | "<<vet[i]<<" | ";
        }
        cout<<"\n";
    }
}

int main(){
    lista_ord_est l;
    int opcao = -1;
    do{
        cout<<"\nSelecione uma das opcoes:\n1-Adicionar\n2-Remover\n3-Imprimir\n0-Sair\n";
        cin>>opcao;
        if(opcao == 1){
            l.adicionar();
        }else if(opcao == 2){
            l.remover();
        }else if(opcao == 3){
            l.imprimir();
        }else if(opcao != 0){
            cout<<"Opcao invalida!";
        }
    }while(opcao != 0);
    return 0;
}
