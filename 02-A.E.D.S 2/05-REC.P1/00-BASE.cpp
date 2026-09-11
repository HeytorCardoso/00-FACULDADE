#include <iostream>
#include <cstdlib>

using namespace std;

class no{
	public:
	int valor;
	no *prox;
	no *ant;
	no();
};
no::no(){
	valor = 0;
	ant = NULL;
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
		void adicionar(int x);
		void remover();
		void imprimir();
		int getqtd();
};

filad::filad(){
	ini = NULL;
	fim = NULL;
	qtd = 0;
}

filad::~filad(){
	while(qtd>0){
		remover();
	}
}

void filad::adicionar(int x){
	no *novo = new no();
	novo->valor = x;
	if(qtd==0){
		ini = novo;
		fim = novo;
	}
	else{
		fim->prox = novo;
		novo->ant = fim;
		fim = novo;
	}
	qtd++;
}

int filad::getqtd(){
	return qtd;
}


void filad::remover(){
	if(qtd>0){
		no *aux = ini;
		if(qtd==1){
			ini = NULL;
			fim = NULL;
		}
		else{
			ini = ini->prox;
			ini->ant = NULL;
		}
		
		qtd--;
		delete aux;
	}
	else{
		cout<<"FILA VAZIA\n";
	}
}

void filad::imprimir(){
	if(qtd>0){
		no *aux = ini;
		while(aux!=NULL){
			cout<<" | "<<aux->valor<<" | ";
			aux = aux->prox;		
		}
	}
	else{
		cout<<"FILA VAZIA\n";
	}
	
	
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
	//cout<<"VOU REMOVER E A QUANTIDADE EH: "<<qtd<<endl;
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

class pilhad{
	private:
		int qtd;
		no *topo;
	public:
		pilhad();
		~pilhad();
		void adiciona(int x);
		void remove();
		void imprime();
		int getqtd();
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
//575j7pju
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

int pilhad::getqtd(){
	return qtd;
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

