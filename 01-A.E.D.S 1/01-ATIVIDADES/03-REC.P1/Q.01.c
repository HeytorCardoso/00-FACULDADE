#include <stdio.h>

int main() {
    int total;
    int anos, meses, semanas, dias, horas, minutos, segundos;
    int resto;

    printf("Digite o valor em segundos: ");
    scanf("%d", &total);

    anos = total / (60*60*24*7*4*12);
    resto = total % (60*60*24*7*4*12);

    meses = resto / (60*60*24*7*4);
    resto = resto % (60*60*24*7*4);

    semanas = resto / (60*60*24*7);
    resto = resto % (60*60*24*7);

    dias = resto / (60*60*24);
    resto = resto % (60*60*24);

    horas = resto / (60*60);
    resto = resto % (60*60);

    minutos = resto / 60;
    segundos = resto % 60;

    if (anos > 0) {
        printf("%d Anos ", anos);
    }

    if (meses > 0) {
        printf("%d Meses ", meses);
    }

    if (semanas > 0) {
        printf("%d Semanas ", semanas);
    }

    if (dias > 0) {
        printf("%d Dias ", dias);
    }

    if (horas > 0) {
        printf("%d Horas ", horas);
    }

    if (minutos > 0) {
        printf("%d Minutos ", minutos);
    }

    if (segundos > 0) {
        printf("%d Segundos ", segundos);
    }

    printf("\n");

    return 0;
}