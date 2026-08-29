#include <stdio.h>


// Questão 01 - Cálculo de IMC
void imc() {
    float peso = 0;
    float altura = 0;
    printf("Digite seu peso:\n");
    scanf("%f", &peso);
    printf("Digite sua altura:\n");
    scanf("%f", &altura);
    float imc = peso / (altura*altura);
    printf("O índice de massa corporal dessa pessoa é: %.2f", imc);
}

// Questão 02 - Conversão de graus Celsius para graus Fahrenheit
void convert_c_f() {
    float temp_c = 0;
    printf("Digite a temperatura em Celsius:\n");
    scanf("%f", &temp_c);
    float far = (temp_c * (9.0/5.0)) + 32;
    printf("%.2f graus Celsius é igual à %.2f em graus Fahrenheit.", temp_c, far);
}

// Questão 03 - Descobrir perímetro e área de uma circunferência a partir de um raio
void circun() {
    float raio = 0;
    float pi = 3.14;
    printf("Digite o raio da circunferência:\n");
    scanf("%f", &raio);
    float perimetro = 2*pi*raio;
    float area = pi*(raio*raio);
    printf("Uma circunferência de raio %.2f tem um perímetro de %.2f e uma área de %.2f.", raio, perimetro, area);
}

// Questão 04 - Resolução da seguinte equação: (b^3 + ab) - 2 ab + a mod b
void equacao() {
    int a = 0;
    int b = 0;

    printf("Digite o valor de a:\n");
    scanf("%d", &a);
    printf("Digite o valor de b:\n");
    scanf("%d", &b);
    int equa = ((b*b*b)+(a*b))-(2*b)+(a%b);
    printf("f(x) = %d", equa);
}

// Questão 05 - Descobrir a hipotenusa de um triângulo informando o cateto adjacente e o oposto
void hipo() {
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

// Questão 06 - Conversão de graus Fahrenheit para graus Celsius
void convert_f_c() {
    float temp_f = 0;
    printf("Digite a temperatura em graus Fahrenheit: \n");
    scanf("%f", &temp_f);
    float convert = ((temp_f-32)/9)*5;
    printf("%.2f graus Fahrenheit é igual à %.2f graus Celsius", temp_f, convert);
}

// Questão 07 - Descobrir o salário final de um funcionário considerando gratificação e impostos
void desc_salario() {
    float salario_base = 0;
    printf("Digite seu salário base:\n");
    scanf("%f", &salario_base);
    float grat = salario_base * 0.05;
    float impost = salario_base * 0.07;
    float salario_final = (salario_base+grat)-impost;
    printf("Sua gratificação foi de R$ %.2f, e o descontos de impostos foram de R$ %.2f, resultando em um salário final de: R$ %.2f", grat, impost, salario_final);
}

// Questão 08 - Descobrir o salário final de um encanador considerando dias trabalhados e impostos
void encanador() {
    int dias_trab = 0;
    printf("Informe quantos dias o encanador trabalhou:\n");
    scanf("%d", &dias_trab);
    float salario_brut = (30*dias_trab);
    float salario_liq = salario_brut - (salario_brut*0.08);
    printf("O salário líquido do encanador foi de: R$ %.2f, sendo que foram descontados R$ %.2f do imposto de renda.", salario_liq, (salario_brut*0.08));
}

// Questão 09 - Realizar a coleta das variáveis A e B e trocar os valores delas
void troca_vari() {
    float vari_a = 0;
    float vari_b = 0;

    printf("Digite o valor da variável A (valor numérico!):\n");
    scanf("%f", &vari_a);
    printf("Digite o valor da variável B (valor numérico!):\n");
    scanf("%f", &vari_b);

    float vari_c = vari_a;
    vari_a=vari_b;
    vari_b=vari_c;
    printf("O valor da variável A, agora é %.2f, e o valor de B é %.2f, pois foram trocadas.", vari_a, vari_b);
}

// Extra - Inicialização do programa e "HUB" de seleção das resoluções das questões
int main() {
    int opcao = 0;

    printf("Escolha uma opção (Digite o número dela):\n");
    printf("1-Calcular IMC\n");
    printf("2-Converter °C em °F\n");
    printf("3-Calcular o perímetro e área de uma circunferência\n");
    printf("4-Resolver a equação: (b^3 + ab) - 2 ab + a mod b\n");
    printf("5-Descobrir a hipotenusa de um triângulo retângulo\n");
    printf("6-Converter °F em °C\n");
    printf("7-Descobrir gratificação e desconto de imposto sobre salário base\n");
    printf("8-Descobrir o salário líquido de um encanador, considerando impostos\n");
    printf("9-Troca de valor entre as variáveis A e B\n");

    scanf("%d", &opcao);
    switch(opcao){
        case 1:
            imc();
            break;
        case 2:
            convert_c_f();
            break;
        case 3:
            circun();
            break;
        case 4:
            equacao();
            break;
        case 5:
            hipo();
            break;
        case 6:
            convert_f_c();
            break;
        case 7:
            desc_salario();
            break;
        case 8:
            encanador();
            break;
        case 9:
            troca_vari();
            break;
        default:
            printf("Opção inválida!\n");
    }
    return 0;
}