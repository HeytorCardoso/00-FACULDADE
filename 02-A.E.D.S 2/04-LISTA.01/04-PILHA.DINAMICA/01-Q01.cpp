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
	ant=NULL;
	}

class pilhad{
	private:
		no *topo;
		int qtd;
	public:
		pilhad();
		//˜pilhad();
		void adicionar();
		void remover();
		void imprimir();
        void rm_meio();
	};

pilhad::pilhad(){
	qtd = 0;
	topo = NULL;
}

void pilhad::adicionar(){
	int x = 0;
	cout<<"\nDigite o valor desejado: ";
	cin>>x;
	no *novo = new no();
	(*novo).valor = x;
	if(qtd == 0){
		topo = novo;
	}else{
		(*novo).ant = topo;
		topo = novo;
	}
	novo = NULL;
	delete novo;
	qtd++;
}

void pilhad::remover(){
	if(qtd==0){
		cout<<"\nA pilha esta vazia!";
	}else{
		no *aux = new no();
		aux = topo;
		topo = (*topo).ant;
		delete aux;
        qtd--;
	}
}

void pilhad::imprimir(){
	if(qtd == 0){
		cout<<"\nA pilha esta vazia!";
	}else{
		no *aux = new no();
		aux = topo;
		while(aux != NULL){
			cout<<"\n| "<<((*aux).valor)<<" |\n";
			aux = (*aux).ant;
		}
		delete aux;
	}
}

void pilhad::rm_meio(){
    if(qtd == 0){
        cout<<"\nPilha vazia!";
    }else if(qtd == 1){
        cout<<"\nA pilha nao possui meio!";
    }else{
        no *aux = new no();
        no *aux2 = new no();
        no *aux3 = new no();
        aux = topo;
        int i = 0;
        
        while(aux != NULL){
            if(i == (qtd/2)){
                (*aux2).ant = aux3;
                aux = NULL;
                qtd--;
                break;
            }else{
                if(i+1 == (qtd/2)){
                    aux2 = aux;
                }
                aux = (*aux).ant;
                i++;
                if(i == (qtd/2)){
                    aux3 = (*aux).ant;
                }
            }
        }
        delete aux;
    }
}

int main(){
	pilhad p;
	int opcao = 0;
	do{
		cout<<"\nEscolha uma opcao: \n1-Adicionar\n2-Remover\n3-Imprimir\n4-Remover Meio\n0-Sair\n";
		cin>>opcao;

		if(opcao == 1){
			p.adicionar();
		}
		else if (opcao == 2){
			p.remover();
		}
		else if (opcao == 3){
			p.imprimir();
		}
        else if(opcao ==4){
            p.rm_meio();
        }
	}while(opcao != 0);
	return 0;
}