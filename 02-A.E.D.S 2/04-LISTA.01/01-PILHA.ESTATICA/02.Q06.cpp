#include <iostream>

using namespace std;

class pilhae{
    private:
        int qtd;
        int topo;
        int dados[5];
    public:
        pilhae();
        void adicionar();
        void remover();
        void imprimir();
        void rotacionar();
};

pilhae::pilhae(){
    qtd = 0;
    topo = 0;
    for(int i=0; i<5; i++){
        dados[i] = 0;
    }
}

void pilhae::adicionar(){
    if(qtd == 5){
        cout<<"\nPilha cheia!";
    }else{
        int valor = 0;
        cout<<"\nDigite o valor desejado: ";
        cin>>valor;
        if(qtd == 0){
            dados[0] = valor;
            topo = 0;
        }else{
            dados[qtd] = valor;
            topo = qtd;
        }
        qtd++;
    }
}

void pilhae::remover(){
    if(qtd == 0){
        cout<<"Pilha vazia!";
    }else{
        dados[qtd-1] = 0;
        qtd--;
    }
}

void pilhae::imprimir(){
    if(qtd == 0){
        cout<<"\nPilha vazia!";
    }else{
        cout<<"\n";
        for(int i=qtd; i>0; i--){
            cout<<"\n| "<<dados[i-1]<<" |";
        }
        cout<<"\n";
    }
}

void pilhae::rotacionar(){
    if(qtd == 0){
        cout<<"Pilha vazia";
    }else{
        for(int i=(qtd-1); i>0; i--){
            int aux = dados[i];
            dados[i] = dados[i-1];
            dados[i-1] = aux;
        }
    }
}

int main(){
    pilhae p;
    int opcao = -1;
    do{
        cout<<"\nSelecione uma opcao:\n1-Adicionar\n2-Remover\n3-Imprimir\n4-Rotacionar\n0-Sair\n";
        cin>>opcao;
        if(opcao == 1){
            p.adicionar();
        }else if(opcao == 2){
            p.remover();
        }else if(opcao == 3){
            p.imprimir();
        }else if(opcao == 4){
            p.rotacionar();
        }
    }while(opcao != 0);
    return 0;
}