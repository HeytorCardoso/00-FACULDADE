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
        void remover_central();
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

    if(ini == NULL){
        ini = fim = novo;
    }else{
        no *aux = ini;
        while(aux != NULL && (*aux).valor < valor){
            aux = (*aux).prox;
        }
        if(aux == NULL){
            (*novo).ant = fim;
            (*fim).prox = novo;
            fim = novo;
        }else if(aux == ini){
            (*novo).prox = ini;
            (*ini).ant = novo;
            ini = novo;
        }else{
            (*novo).ant = (*aux).ant;
            (*novo).prox = aux;
            (*(*aux).ant).prox = novo;
            (*aux).ant = novo;
        }
    }
    qtd++;
}

void lista_ord::remover(){
    if(qtd == 0){
        cout<<"\nA lista esta vazia!";
        return;
    }

    int valor = 0;
    cout<<"\nDigite o valor que deseja remover: ";
    cin>>valor;

    no *aux = ini;
    while(aux != NULL && (*aux).valor != valor){
        aux = (*aux).prox;
    }

    if(aux == NULL){
        cout<<"\nValor nao encontrado!";
        return;
    }

    if((*aux).ant == NULL){
        ini = (*aux).prox;
    }else{
        (*(*aux).ant).prox = (*aux).prox;
    }

    if((*aux).prox == NULL){
        fim = (*aux).ant;
    }else{
        (*(*aux).prox).ant = (*aux).ant;
    }

    delete aux;
    qtd--;
    cout<<"\nRemovido com sucesso!";
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

void lista_ord::remover_central(){
    if(qtd == 0){
        cout<<"\nA lista esta vazia!";
        return;
    }

    int meio = (qtd-1)/2;

    no *aux = ini;
    for(int i=0; i<meio; i++){
        aux = (*aux).prox;
    }

    if((*aux).ant == NULL){
        ini = (*aux).prox;
    }else{
        (*(*aux).ant).prox = (*aux).prox;
    }

    if((*aux).prox == NULL){
        fim = (*aux).ant;
    }else{
        (*(*aux).prox).ant = (*aux).ant;
    }

    cout<<"\nNo central removido: "<<(*aux).valor;
    delete aux;
    qtd--;
}

int main(){
    lista_ord l;
    int opcao = -1;
    do{
        cout<<"\nSelecione uma das opcoes:\n1-Adicionar\n2-Remover\n3-Imprimir\n4-Remover Elemento Central\n0-Sair\n";
        cin>>opcao;
        if(opcao == 1){
            l.adicionar();
        }else if(opcao == 2){
            l.remover();
        }else if(opcao == 3){
            l.imprimir();
        }else if(opcao == 4){
            l.remover_central();
        }else if(opcao != 0){
            cout<<"Opcao invalida!";
        }
    }while(opcao != 0);
    return 0;
}