#include <stdio.h>
#include <string.h>

void descriptografar_e_exibir(char palavra[26]);

int main() {
    char palavras[6][26];
    int i, j, k;

    for (i = 0; i < 6; i++) {
        printf("Digite a palavra %d (max 25 letras): ", i + 1);
        scanf("%s", palavras[i]);
    }

    for (i = 0; i < 6; i += 2) {
        for (j = i + 2; j < 6; j += 2) {
            if (strcmp(palavras[i], palavras[j]) > 0) {
                char aux[26];
                strcpy(aux, palavras[i]);
                strcpy(palavras[i], palavras[j]);
                strcpy(palavras[j], aux);
            }
        }
    }

    for (i = 0; i < 6; i++) {
        for (k = 0; palavras[i][k] != '\0'; k++) {
            char c = palavras[i][k];
            
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
                if (k % 2 == 0) {
                    if (c >= 'a' && c <= 'z') {
                        c = ((c - 'a' + 3) % 26) + 'a';
                    } else {
                        c = ((c - 'A' + 3) % 26) + 'A';
                    }
                } else {
                    if (c >= 'a' && c <= 'z') {
                        c = ((c - 'a' - 2 + 26) % 26) + 'a';
                    } else {
                        c = ((c - 'A' - 2 + 26) % 26) + 'A';
                    }
                }
                palavras[i][k] = c;
            }
        }
    }

    printf("\nPalavras Criptografadas:\n");
    for (i = 0; i < 6; i++) {
        printf("Indice %d: %s\n", i, palavras[i]);
    }
    printf("\nDescriptografia (Reversao)\n");
    for (i = 0; i < 6; i++) {
        printf("Original (Indice %d): ", i);
        descriptografar_e_exibir(palavras[i]);
    }

    return 0;
}

void descriptografar_e_exibir(char palavra_cripto[26]) {
    char original[26];
    int k;
    strcpy(original, palavra_cripto);

    for (k = 0; original[k] != '\0'; k++) {
        char c = original[k];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (k % 2 == 0) {
                if (c >= 'a' && c <= 'z') {
                    c = ((c - 'a' - 3 + 26) % 26) + 'a';
                } else {
                    c = ((c - 'A' - 3 + 26) % 26) + 'A';
                }
            } else {
                if (c >= 'a' && c <= 'z') {
                    c = ((c - 'a' + 2) % 26) + 'a';
                } else {
                    c = ((c - 'A' + 2) % 26) + 'A';
                }
            }
            original[k] = c;
        }
    }
    printf("%s\n", original);
}
