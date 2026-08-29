#include <stdio.h>

// Questão 05 - Descobrir a hipotenusa de um triângulo informando o cateto adjacente e o oposto
int main() {
    float ca = 0;
    float co = 0;

    printf("Digite o valor do cateto adjacente:\n");
    scanf("%f", &ca);
    printf("Digite o valor do cateto oposto:\n");
    scanf("%f", &co);
    float sum_cat = (ca*ca) + (co*co);
    float hipo = 0;
    float i = 0;
    float elev = 0;
    float raiz_ex = 0;
    do {
        i++;
        elev = i*i;
        if (elev == sum_cat) {
            printf("A hipotenusa desse triângulo é igual à: %.5f", i);
            raiz_ex = i;
            break;
        }
    } while (elev < sum_cat);
    if (raiz_ex == 0) {
        float val_prox = i-1;
        for (int j = 0; j < 4; j++) {
            float result = (sum_cat/val_prox);
            hipo = (val_prox+result)/2;
            val_prox=hipo;
        }
        printf("A hipotenusa desse triângulo é igual à: %.5f", hipo);
    }
}