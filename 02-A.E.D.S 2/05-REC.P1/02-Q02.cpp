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
        ~filad();
        void adicionar();
        void remover();
        void imprimir();
        void prov_menor();
};

filad::filad(){
    qtd = 0;
    ini = NULL;
    fim = NULL;
}

filad::~filad(){
    no *aux = ini;
    while(aux != NULL){
        no *prox = (*aux).prox;
        delete aux;
        aux = prox;
    }
    ini = NULL;
    fim = NULL;
    qtd = 0;
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

void filad::prov_menor(){
    if(qtd<1){
        cout<<"\nNao ha quantidade suficiente para o metodo!";
    }else{
        no *aux = ini;
        no *menor = ini;
        no *aux2 = ini;
        while(aux != NULL && (*aux).prox != NULL){
            if((*(*aux).prox).valor < (*menor).valor){
                menor = (*aux).prox;
                aux2 = aux;
                }
            aux = (*aux).prox;
        }
        if(menor != ini){
            if(menor == fim){
                (*aux2).prox = NULL;
            }else{
                (*aux2).prox = (*menor).prox;
            }
            (*menor).prox = ini;
            ini = menor;
        }
    }
}

int main(){
    filad f;
    int opcao = -1;
    do{
        cout<<"\nEscolha uma das seguintes opcoes:\n1-Adicionar\n2-Remover\n3-Imprimir\n4-Promover Menor\n0-Sair\n";
        cin>>opcao;
        if(opcao == 1){
            f.adicionar();
        } else if(opcao ==2){
            f.remover();
        } else if(opcao == 3){
            f.imprimir();
        } else if(opcao==4){
            f.prov_menor();
        }
    } while(opcao != 0);
    return 0;
}