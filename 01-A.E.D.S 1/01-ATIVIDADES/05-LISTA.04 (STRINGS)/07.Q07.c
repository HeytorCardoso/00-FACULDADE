#include <stdio.h>

int main(){
    char suja[] = "Pr0gr4m4çã0";
    char limpa[50];
    int i = 0;
    int j = 0;

    while(suja[i] != '\0'){
        if(suja[i] < '0' || suja[i] > '9'){
            limpa[j] = suja[i];
            j++;
        }
        i++;
    }
    limpa[j] = '\0';

    printf("String limpa: %s\n", limpa);

    return 0;
}
