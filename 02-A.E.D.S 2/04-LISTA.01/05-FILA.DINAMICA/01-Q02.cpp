#include <iostream>

using namespace std;

class no{
    public:
        no();
        int valor;
        no *prox;
};

no::no(){
    valor = 0;
    prox = NULL;
}

class filad{
    private:
        no *ini;
        no *fim;
        int qtd;

    public:
        filad();
        void adicionar();
        void remover();
        void imprimir();
        void ivt_ini();
};

filad::filad(){
    qtd = 0;
    ini = NULL;
    fim = NULL;
}

void filad::adicionar(){
    int valor = 0;
    cout<<"\nDigite o valor desejado: ";
    cin>>valor;
    no *novo = new no();
    (*novo).valor = valor;
    if(qtd == 0){
        ini = novo;
        fim = novo;
    }else{
        no *aux = new no();
        aux = ini;
        while((*aux).prox != NULL){
            aux = (*aux).prox;
        }
        (*aux).prox = novo;
        fim = novo;
    }
    qtd++;
}

void filad::remover(){
    if(qtd == 0){
        cout<<"\nA fila esta vazia\n";
    }else if(qtd == 1){
        ini = NULL;
        fim = NULL;
        qtd--;
    }else{
        no *aux = new no();
        aux = (*ini).prox;
        ini = NULL;
        ini = aux;
        qtd--;
    }
}

void filad::imprimir(){
    if(qtd == 0){
        cout<<"\nA fila esta vazia\n";
    }else{
        no *aux = new no();
        aux = ini;
        cout<<"\n";
        while(aux != NULL){
            cout<<"| "<<(*aux).valor<<" | ";
            aux = (*aux).prox;
        }
        cout<<"\n";
        delete aux;
    }
}

void filad::ivt_ini(){
    if(qtd<4){
        cout<<"\nA pilha deve ter pelo menos 4 elementos!";
    }else{
        no *aux = ini;
        no *aux2 = (*(*aux).prox).prox;

        ini = (*aux2).prox;
        (*fim).prox = aux;
        fim = aux2;
        (*aux2).prox = NULL;
        
        aux = NULL;
        aux2 = NULL;
        delete aux;
        delete aux2;
    }
}

int main(){
    filad f;
    int opcao = -1;
    do{
        cout<<"Escolha uma das seguintes opcoes:\n1-Adicionar\n2-Remover\n3-Imprimir\n4-Inverter Inicio\n0-Sair\n";
        cin>>opcao;
        if(opcao == 1){
            f.adicionar();
        } else if(opcao ==2){
            f.remover();
        } else if(opcao == 3){
            f.imprimir();
        } else if(opcao == 4){
            f.ivt_ini();
        }
    } while(opcao != 0);
    return 0;
}