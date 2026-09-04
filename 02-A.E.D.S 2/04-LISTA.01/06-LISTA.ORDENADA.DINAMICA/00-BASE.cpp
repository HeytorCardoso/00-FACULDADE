#include <iostream>

using namespace std;

class no{
    public:
        no();
        int valor;
        no *ant;
        no *prox;
};

no::no(){
    valor = 0;
    ant = NULL;
    prox = NULL;
}

class lista_ord{
    private:
        int qtd;
        no *ini;
        no *fim;
    public:
        lista_ord();
        void adicionar();
        void remover();
        void imprimir();
};

lista_ord::lista_ord(){
    qtd = 0;
    ini = NULL;
    fim = NULL;
}

void lista_ord::adicionar(){
    int valor = 0;
    cout<<"\nDigite o valor desejado: ";
    cin>>valor;
    no *novo = new no();
    (*novo).valor = valor;
    if(qtd==0){
        ini = novo;
        fim = novo;
    }else{
        bool ctrl = false;
        no *aux = ini;
        while(aux != NULL){
            if((*novo).valor <= (*aux).valor){
                int val = 0;
                val = (*aux).valor;
                (*aux).valor = (*novo).valor;
                (*novo).valor = val;
                no *aux2 = (*aux).prox;
                (*aux).prox = novo;
                (*novo).ant = aux;
                if(aux2 == NULL){
                    (*novo).prox = NULL;
                }else{
                    (*novo).prox = aux2;
                    (*aux2).ant = novo;
                }
                ctrl = true;
                break;
            }
            aux = (*aux).prox;
        }
        if(ctrl == false){
            cout<<"\nCheguei aqui!";
            cout<<"\nINI: "<<(*ini).valor;
            cout<<"\nFIM: "<<(*fim).valor;
            (*novo).prox = (*fim).prox;
            (*fim).prox = novo;
            (*novo).ant = fim;
            fim = novo;
        }
        cout<<"\nCTRL: "<<ctrl;
    }
    qtd++;
}

void lista_ord::remover(){
    if(qtd==0){
        cout<<"\nA lista esta vazia!";
    }else{
        int valor = 0;
        cout<<"\nDigite o valor que deseja remover: ";
        cin>>valor;
        no *aux = ini;
    }
}

void lista_ord::imprimir(){
    if(qtd==0){
        cout<<"\nA lista esta vazia!";
    }else{
        cout<<"\n";
        no *aux = ini;
        while(aux != NULL){
            cout<<" | "<<(*aux).valor<<" | ";
            aux = (*aux).prox;
        }
        cout<<"\n";
    }
}

int main(){
    lista_ord l;
    int opcao = -1;
    do{
        cout<<"\nSelecione uma das opcoes:\n1-Adicionar\n2-Remover\n3-Imprimir\n0-Sair\n";
        cin>>opcao;
        if(opcao == 1){
            l.adicionar();
        }else if(opcao == 2){
            //l.remover();
        }else if(opcao == 3){
            l.imprimir();
        }else if(opcao == 4){

        }else if(opcao != 0){
            cout<<"Opcao invalida!";
        }
    }while(opcao != 0);
    return 0;
}