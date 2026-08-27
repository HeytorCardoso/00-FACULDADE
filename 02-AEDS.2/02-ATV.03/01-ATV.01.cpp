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
	prox=NULL;
	}

class pilhad{
	public:
		no *topo;
		int qtd;
	private:
		pilhad();
		//˜pilhad();
		void adicionar();
		void remover();
		void imprimir();
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
		no *aux = new no();
		aux = topo;
		topo = novo;
		(*topo).ant = aux;
	}
}

void pilhad::imprimir(){
	no *aux2 = new no();
	no *aux3 = new no();
	aux2 = topo;
	while((*aux2).ant != NULL){
		cout<<"\n| "<<aux2;
		aux3 = (*aux2).ant;
		
	}
}

int main(){
	
	cout<<"Teste!";
	
	return 0;
}