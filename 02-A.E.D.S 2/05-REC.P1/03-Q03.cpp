#include <iostream>
#include <cstdlib>

using namespace std;

class no{
public:
    int valor;
    no *ant;
    no *prox;
    no();
};
no::no(){
    valor = 0;
    ant = NULL;
    prox = NULL;
}

class lista{
private:
    int qtd;
    no *ini;
    no *fim;
public:
    lista();
    ~lista();
    void adiciona(int x);
    void remove(int x);
    void imprime();
    bool estanalista(int x);
    int getElementoPosicao(int pos);
};

lista::lista(){
    qtd = 0;
    ini = NULL;
    fim = NULL;
}

lista::~lista(){
    while(qtd>0){
        remove(ini->valor);
    }
}

void lista::adiciona(int x){
    no *novo = new no();
    novo->valor = x;
    if(qtd==0){
        ini = novo;
        fim = novo;
    }
    else{
        if(novo->valor < ini->valor){
            ini->ant = novo;
            novo->prox= ini;
            ini = novo;
        }
        else if(novo->valor > fim->valor){
            fim->prox = novo;
            novo->ant = fim;
            fim = novo;
        }
        else{
            no *aux = ini;
            while(novo->valor > aux->valor){
                aux = aux->prox;
            }
            no *aux2 = aux->ant;
            novo->prox= aux;
            novo->ant = aux2;
            aux->ant = novo;
            aux2->prox= novo;
        }
    }
    qtd++;
}

void lista::remove(int x){
    if(qtd>0){
        no *aux = ini;
        while(x!=aux->valor){
            aux = aux->prox;
            if(aux==NULL){
                break;
            }
        }
        if(aux!=NULL){
            if(qtd==1){
                ini = NULL;
                fim = NULL;
            }
            else{
                if(x==ini->valor){
                    ini = ini->prox;
                    ini->ant = NULL;
                }
                else if(x==fim->valor){
                    fim = fim->ant;
                    fim->prox= NULL;
                }
                else{
                    no *aux2 = aux->prox;
                    no *aux3 = aux->ant;
                    aux3->prox = aux2;
                    aux2->ant = aux3;
                }
            }
            qtd--;
            delete aux;
        }
        else{
            cout<<"O VALOR QUE VC PROCURA NAO ESTA NA LISTA\n";
        }
    }
    else{
        cout<<"LISTA VAZIA\n";
    }
}

void lista::imprime(){
    if(qtd>0){
        no *aux = ini;
        while(aux!=NULL){
            cout<<aux->valor<<" ";
            aux = aux->prox;
        }
    }
    else{
        cout<<"LISTA VAZIA\n";
    }
}

bool lista::estanalista(int x){
    if(qtd==0){
        return false;
    }
    else{
        no *aux = ini;
        while(aux!=NULL){
            if(x==aux->valor){
                return true;
            }
            aux = aux->prox;
        }
        return false;
    }
}

int lista::getElementoPosicao(int pos){
    no *aux = ini;
    for (int i = 0; i < pos; i++) {
        aux = aux->prox;
    }
    return aux->valor;
}


class pilhad{
private:
    int qtd;
public: // deixei publico pra conseguir acessar o valor na hora de restaurar
    no *topo;
    pilhad();
    ~pilhad();
    void adiciona(int x);
    void remove();
    void imprime();
    int getqtd();
    void inserirPontoDeCalibracao();
};

pilhad::pilhad(){
    qtd = 0;
    topo = NULL;
}

pilhad::~pilhad(){
    while(qtd>0){
        remove();
    }
}

void pilhad::adiciona(int x){
    no *novo = new no();
    novo->valor = x;
    if(qtd==0){
        topo = novo;
    }
    else{
        novo->ant = topo;
        topo = novo;
    }
    qtd++;
}

void pilhad::remove(){
    if(qtd>0){
        no *aux = topo;
        if(qtd==1){
            topo=NULL;
        }
        else{
            topo = topo->ant;
        }
        qtd--;
        delete aux;
    }
    else{
        cout<<"PILHA VAZIA\n";
    }
}

void pilhad::imprime(){
    if(qtd>0){
        no *aux = topo;
        while(aux!=NULL){
            cout<<" | "<<aux->valor<<" | \n";
            aux = aux->ant;
        }
    }
    else{
        cout<<"PILHA VAZIA\n";
    }
}

int pilhad::getqtd(){
    return qtd;
}

void pilhad::inserirPontoDeCalibracao(){
    if(qtd == 0){
        cout << "Aviso\n";
        return;
    }

    lista l;
    pilhad aux;
    int n = qtd;

    for(int i = 0; i < n; i++){
        int v = topo->valor;
        l.adiciona(v);
        aux.adiciona(v);
        remove();
    }

    while(aux.getqtd() > 0){
        adiciona(aux.topo->valor);
        aux.remove();
    }

    double med;
    if(n % 2 != 0){
        med = l.getElementoPosicao(n/2);
    }
    else{
        int v1 = l.getElementoPosicao((n/2)-1);
        int v2 = l.getElementoPosicao(n/2);
        med = (v1 + v2) / 2.0;
    }

    if(l.estanalista(med)){
        adiciona(2026);
    }
    else{
        adiciona(2027);
    }
}

int main(void){
    pilhad p;
    int i = 0;

    do{
        system("cls");
        cout<<"\n1-Adicionar\n2-Remover\n3-Calibrar (Ex 3)\n4-Imprimir\n5-Sair\nDigite uma opcao: ";
        cin>>i;

        if(i == 1){
            int x;
            cout<<"\nDigite um numero: ";
            cin>>x;
            p.adiciona(x);
        }
        else if(i == 2){
            p.remove();
        }
        else if(i == 3){
            p.inserirPontoDeCalibracao();
            cout << "\nCalibrado\n";
        }
        else if(i == 4){
            p.imprime();
        }
        else if(i != 5){
            cout<<"Opcao invalida";
        }
        system("pause");
    }while(i!=5);
    return 0;
}