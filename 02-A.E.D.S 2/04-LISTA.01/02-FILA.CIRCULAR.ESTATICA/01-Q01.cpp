#include <iostream>

using namespace std;

class filae{
    private:
        int qtd;
        int dados[5];
        int ini;
        int fim;
    public:
    filae();
    void adicionar();
    void remover();
    void imprimir();
    void inverter_ordem();
};

filae::filae(){
    qtd = 0;
    ini = 0;
    fim = 0;
    for(int i=0; i<5; i++){
        dados[i] = 0;
    }
}

void filae::adicionar(){
    if(qtd==5){
        cout<<"\nFila cheia!";
        return;
    }
    int x=0;
    cout<<"\nDigite o valor desejado: ";
    cin>>x;
    if(qtd==0){
        dados[fim] = x;
        qtd++;
    }else{
        fim++;
        if(fim==5){
            fim = 0;
        }
        dados[fim+1] = x;
        qtd++;
    }
}

void filae::remover(){
    if(qtd==0){
        cout<<"\nFila vazia!";
    }else{
        dados[ini] = 0;
        qtd--;
        ini++;
        if(ini==5){
            ini=0;
        }
    }
}

void filae::imprimir(){
    if(qtd==0){
        cout<<"\nFila vazia!";
    }else{
        int aux = ini;
        for(int i=0; i<qtd; i++){
            if(aux==5){
                aux=0;
            }
            cout<<"|"<<dados[aux]<<"|";
            aux++;
        }
        cout<<"\nI: "<<ini<<" | F: "<<fim;
    }
}

void filae::inverter_ordem(){
    if(qtd==0){
        cout<<"\nFila vazia!";
    }else if(qtd<2){
        cout<<"\nA fila nao possui elementos suficientes!";
    }else{
        for(int i=0; i<((qtd-1)/2); i++){
            int aux = dados[i];
            dados[i] = dados[(qtd-1)-i];
            dados[(qtd-1)-i] = aux;
        }
    }
}

int main(){
    filae filae;
    int selec=0;
    do{
        cout<<"\n\nSelecione uma das opcoes abaixo:\n1-Adicionar\n2-Remover\n3-Imprimir\n4-Inverter Ordem\n0-Sair\n";
        cin>>selec;
        if(selec==1){
            filae.adicionar();
        }else if(selec==2){
            filae.remover();
        }else if(selec==3){
            filae.imprimir();
        }else if(selec==4){
            filae.inverter_ordem();
        }else if (selec!=0){
            cout<<"\nOpcao invalida!";
        }
    }while(selec != 0);
    return 0;
}