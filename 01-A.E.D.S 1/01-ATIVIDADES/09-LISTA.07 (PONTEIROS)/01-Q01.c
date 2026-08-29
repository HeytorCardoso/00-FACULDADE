#include <stdio.h>

int troca (int *c, int *d){
    int aux = *d;
    *d = *c;
    *c = aux;

    return 0;
}

int main () {
    int a = 5;
    int b = 10;

    printf("Valores antes da troca: A=%d e B=%d\n", a, b);
    troca(&a, &b);
    printf("Valores depois da troca: A=%d e B=%d\n", a, b);
    
    return 0;
}