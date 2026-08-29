#include <stdio.h>

// Questão 04 - Resolução da seguinte equação: (b^3 + ab) - 2 ab + a mod b
int main() {
    int a = 0;
    int b = 0;

    printf("Digite o valor de a:\n");
    scanf("%d", &a);
    printf("Digite o valor de b:\n");
    scanf("%d", &b);
    int equa = ((b*b*b)+(a*b))-(2*b)+(a%b);
    printf("f(x) = %d", equa);
}