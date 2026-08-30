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
        void rm_dupl();
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

void pilhad::rm_dupl(){
    no *aux = topo;
    no *ant = (*aux).ant;
    while(ant != NULL){
        if((*aux).valor == (*ant).valor){
            (*aux).valor = (*aux).valor * 2;
            (*aux).ant = (*ant).ant;
            delete ant;
            qtd--;
            ant = (*aux).ant;
        }
        aux = (*aux).ant;
        ant = (*ant).ant;
    }
}

int main(){
	pilhad p;
	int opcao = 0;
	do{
        cout<<"\n\nEscolha uma opcao: \n1-Adicionar\n2-Remover\n3-Imprimir\n4-Remover Duplicatas\n0-Sair\n";
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
        else if (opcao == 4){
            p.rm_dupl();
        }
	}while(opcao != 0);
	return 0;
}