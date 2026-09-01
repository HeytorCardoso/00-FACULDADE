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
        (*novo).ant = fim;
        (*fim).prox = novo;
        fim = novo;
    }
}

int main(){
    lista_ord l;
    int opcao = -1;
    do{
        cout<<"\nSelecione uma das opcoes:\n1-Adicionar\n2-Remover\n3-Imprimir\n0-Sair";
        cin>>opcao;
        if(opcao == 1){

        }else if(opcao == 2){

        }else if(opcao == 3){

        }else if(opcao == 4){

        }else if(opcao != 0){
            cout<<"Opcao invalida!";
        }
    }while(opcao != 0);
    return 0;
}