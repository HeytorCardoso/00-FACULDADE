#include <iostream>

using namespace std;

class FilaCE {
  public:
    int *dados;
    int tamanho;
    int inicio;
    int fim;
    int quantidade;

    FilaCE(int tamanho) {
        this->tamanho = tamanho;
        dados = new int[tamanho];
        inicio = 0;
        fim = 0;
        quantidade = 0;
    }

    ~FilaCE() {
        delete[] dados;
    }

    void enqueue(int valor) {
        if (quantidade == tamanho) {
            cout << "Fila cheia!" << endl;
            return;
        }
        dados[fim] = valor;
        fim = (fim + 1) % tamanho;
        quantidade++;
    }

    void dequeue() {
        if (quantidade == 0) {
            cout << "Fila vazia!" << endl;
            return;
        }
        inicio = (inicio + 1) % tamanho;
        quantidade--;
    }

    void mostrarFila() {
        if (quantidade == 0) {
            cout << "Fila vazia!" << endl;
            return;
        }
        int i = inicio;
        for (int count = 0; count < quantidade; count++) {
            cout << dados[i] << " ";
            i = (i + 1) % tamanho;
        }
        cout << endl;
    }
};

class PilhaE {
  public:
    int *dados;
    int tamanho;
    int topo;

    PilhaE(int tamanho) {
        this->tamanho = tamanho;
        dados = new int[tamanho];
        topo = -1;
    }

    ~PilhaE() {
        delete[] dados;
    }

    void push(int valor) {
        if (topo == tamanho - 1) {
            cout << "Pilha cheia!" << endl;
            return;
        }
        dados[++topo] = valor;
    }

    void pop() {
        if (topo == -1) {
            cout << "Pilha vazia!" << endl;
            return;
        }
        topo--;
    }

    void mostrarPilha() {
        if (topo == -1) {
            cout << "Pilha vazia!" << endl;
            return;
        }
        for (int i = topo; i >= 0; i--) {
            cout << dados[i] << " ";
        }
        cout << endl;
    }
};

class GerenciadorLogistico {
  private:
    PilhaE p1;
    FilaCE f1;

  public:

    GerenciadorLogistico() : p1(10), f1(10) {}

    ~GerenciadorLogistico() {}
    // vou falar com willian sobre essa parte aqui as classes estaticas que eu criei ja possue
    // destrutores com delete[] dados dentro deles mais um daqueles porems da prova que nao da pra saber
    void processarProximoLote() {

        if (p1.topo != -1) {
            p1.pop();
        }


        if (f1.quantidade >= 2) {
            f1.dequeue();
            f1.dequeue();
        } else if (f1.quantidade == 1) {
            f1.dequeue();
        }
    }
     // fiz esses metodos aqui para ser possivel testar o codigo
    // Métodos auxiliares para testar na main
    void inserirFila(int valor) { f1.enqueue(valor); }
    void inserirPilha(int valor) { p1.push(valor); }
    void exibirStatus() {
        cout << "Pilha (Prioridade): ";
        p1.mostrarPilha();
        cout << "Fila (Comum): ";
        f1.mostrarFila();
    }
};

int main() {
    GerenciadorLogistico gl; // Inicializa automaticamente com tamanho 10

    cout << "--- Inserindo Dados Iniciais ---" << endl;
    gl.inserirPilha(10);
    gl.inserirPilha(20);
    gl.inserirPilha(30);

    gl.inserirFila(1);
    gl.inserirFila(2);
    gl.inserirFila(3);

    gl.exibirStatus();

    cout << "\n--- Processando Lote 1 ---" << endl;
    gl.processarProximoLote();
    gl.exibirStatus();

    cout << "\n--- Processando Lote 2 ---" << endl;
    gl.processarProximoLote();
    gl.exibirStatus();

    return 0;
}