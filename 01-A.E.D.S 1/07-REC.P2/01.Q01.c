#include <stdio.h>

int filtrar_ruidos(int vetor[8]);
int calcular_amplitude(int vetor[8]);
int verificar_primalidade(int amplitude);

int main() {
    int leituras[8];
    int i;
    int resultado_final;

    printf("Subsistema de Telemetria - Drone de Monitoramento\n");
    for (i = 0; i < 8; i++) {
        printf("Digite o valor da leitura %d: ", i + 1);
        scanf("%d", &leituras[i]);
    }

    resultado_final = filtrar_ruidos(leituras);

    printf("Monitoramento concluido. Status de estabilidade: [%d]\n", resultado_final);

    return 0;
}

int filtrar_ruidos(int vetor[8]) {
    int i;
    for (i = 0; i < 8; i++) {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }
    return calcular_amplitude(vetor);
}

int calcular_amplitude(int vetor[8]) {
    int i;
    int maior = vetor[0], menor = vetor[0], amplitude;

    for (i = 1; i < 8; i++) {
        if (vetor[i] > maior) maior = vetor[i];
        if (vetor[i] < menor) menor = vetor[i];
    }

    amplitude = maior - menor;
    return verificar_primalidade(amplitude);
}

int verificar_primalidade(int amplitude) {
    int i;
    if (amplitude <= 1) return 0;
    for (i = 2; i * i <= amplitude; i++) {
        if (amplitude % i == 0) return 0;
    }
    return 1;
}
