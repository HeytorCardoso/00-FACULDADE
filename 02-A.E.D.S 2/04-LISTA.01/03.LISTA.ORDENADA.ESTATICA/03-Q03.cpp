#include <iostream>

using namespace std;

#define MAX 100

class lista_ord_est{
    private:
        int qtd;
        int vet[MAX];
    public:
        lista_ord_est();
        void adicionar();
        void remover();
        void imprimir();
        void buscar_proximo();
};

lista_ord_est::lista_ord_est(){
    qtd = 0;
}

void lista_ord_est::adicionar(){
    if(qtd == MAX){
        cout<<"\nA lista esta cheia!";
        return;
    }

    int valor = 0;
    cout<<"\nDigite o valor desejado: ";
    cin>>valor;

    int i = qtd-1;
    while(i >= 0 && vet[i] > valor){
        vet[i+1] = vet[i];
        i--;
    }
    vet[i+1] = valor;
    qtd++;

    cout<<"\nAdicionado com sucesso!";
}

void lista_ord_est::remover(){
    if(qtd == 0){
        cout<<"\nA lista esta vazia!";
        return;
    }

    int valor = 0;
    cout<<"\nDigite o valor que deseja remover: ";
    cin>>valor;

    int pos = -1;
    for(int i=0; i<qtd; i++){
        if(vet[i] == valor){
            pos = i;
            break;
        }
    }

    if(pos == -1){
        cout<<"\nValor nao encontrado!";
        return;
    }

    for(int i=pos; i<qtd-1; i++){
        vet[i] = vet[i+1];
    }
    qtd--;

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

void lista_ord_est::buscar_proximo(){
    if(qtd == 0){
        cout<<"\nA lista esta vazia!";
        return;
    }

    int x = 0;
    cout<<"\nDigite o valor de X: ";
    cin>>x;

    int pos = 0;
    int menor_dif = abs(vet[0] - x);

    for(int i=1; i<qtd; i++){
        int dif = abs(vet[i] - x);
        if(dif < menor_dif){
            menor_dif = dif;
            pos = i;
        }
    }

    cout<<"\nValor mais proximo de "<<x<<": "<<vet[pos];
    cout<<"\nPosicao: "<<pos<<"\n";
}

int main(){
    lista_ord_est l;
    int opcao = -1;
    do{
        cout<<"\nSelecione uma das opcoes:\n1-Adicionar\n2-Remover\n3-Imprimir\n4-Buscar Proximo\n0-Sair\n";
        cin>>opcao;
        if(opcao == 1){
            l.adicionar();
        }else if(opcao == 2){
            l.remover();
        }else if(opcao == 3){
            l.imprimir();
        }else if(opcao == 4){
            l.buscar_proximo();
        }else if(opcao != 0){
            cout<<"Opcao invalida!";
        }
    }while(opcao != 0);
    return 0;
}