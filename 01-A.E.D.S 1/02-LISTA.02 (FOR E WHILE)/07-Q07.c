#include <stdio.h>
#include <limits.h>

int main() {
    int total_semana[4] = {0};
    int dias_validos[4] = {0};
    
    int maior_horas = -1;
    int maior_semana = 0;
    int maior_dia = 0;
    
    int menor_horas = INT_MAX;
    int menor_semana = 0;
    int menor_dia = 0;
    
    int total_geral = 0;
    int horas = 0;

    for (int semana = 1; semana <= 4; semana++) {
        printf("--- SEMANA %d ---\n", semana);
        
        for (int dia = 1; dia <= 7; dia++) {
            printf("Digite as horas de estudo [Dia %d] (ou -1 se nao estudou): ", dia);
            scanf("%d", &horas);

            if (horas == -1) {
                continue;
            }
            total_semana[semana - 1] += horas;
            dias_validos[semana - 1]++;
            total_geral += horas;

            if (horas > maior_horas) {
                maior_horas = horas;
                maior_semana = semana;
                maior_dia = dia;
            }

            if (horas > 0 && horas < menor_horas) {
                menor_horas = horas;
                menor_semana = semana;
                menor_dia = dia;
            }
        }
        printf("\n");
    }

    printf("================= RELATÓRIO FINAL =================\n");

    for (int i = 0; i < 4; i++) {
        printf("-> Semana %d: Total = %d hora(s)", i + 1, total_semana[i]);
        if (dias_validos[i] > 0) {
            float media = (float)total_semana[i] / dias_validos[i];
            printf(" | Média diária = %.2f hora(s)\n", media);
        } else {
            printf(" | Média diária = 0.00 (Nenhum dia válido registrado)\n");
        }
    }
    
    printf("\n");
    
    if (maior_horas != -1) {
        printf("-> O MAIOR número de horas estudadas foi: %d hora(s) (Registrado na Semana %d, Dia %d)\n", maior_horas, maior_semana, maior_dia);
    } else {
        printf("-> Nenhum dia de estudo registrado para calcular a quantidade máxima.\n");
    }
    
    if (menor_horas != INT_MAX) {
        printf("-> O MENOR número de horas estudadas (maior que 0) foi: %d hora(s) (Registrado na Semana %d, Dia %d)\n", menor_horas, menor_semana, menor_dia);
    } else {
        printf("-> Nenhuma quantidade de horas maior que zero foi registrada no mês para definir a quantidade mínima.\n");
    }

    printf("\n-> Total GERAL de horas estudadas no mês: %d hora(s)\n", total_geral);
    printf("===================================================\n");

    return 0;
}
