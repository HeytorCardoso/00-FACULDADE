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
    void veri_orde();
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
    }else{
        if(qtd==0){
            ini = 0;
            fim = 0;
        }
        int x=0;
        cout<<"\nDigite o valor desejado: ";
        cin>>x;
        if(qtd==0){
            dados[fim] = x;
        }else{
            fim++;
            if(fim==5){
                fim = 0;
            }
            dados[fim] = x;
        }
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

void filae::veri_orde(){
    if(qtd==0){
        cout<<"\nFila vazia!";
    }else if(qtd<2){
        cout<<"\nA fila nao possui elementos suficientes!";
    }else{
        int ordenada = 0;
        for(int i=0, aux=ini, aux2=ini+1; i<qtd; i++, aux++, aux2++){
            if(aux==5){
                aux = 0;
            }
            if(aux2==5){
                aux2 = 0;
            }
            if(aux2>aux){
                ordenada = 1;
            }
        }
        cout<<"\nA lista eh ordenada: "<<ordenada;
    }
}

int main(){
    filae filae;
    int selec=0;
    do{
        cout<<"\n\nSelecione uma das opcoes abaixo:\n1-Adicionar\n2-Remover\n3-Imprimir\n4-Verificar Ordenacao\n0-Sair\n";
        cin>>selec;
        if(selec==1){
            filae.adicionar();
        }else if(selec==2){
            filae.remover();
        }else if(selec==3){
            filae.imprimir();
        }else if(selec==4){
            filae.veri_orde();
        }else if (selec!=0){
            cout<<"\nOpcao invalida!";
        }
    }while(selec != 0);
    return 0;
}