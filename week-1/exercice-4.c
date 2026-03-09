#include <stdio.h>

int main() {
    int opcao;
    float temp, conv;

    printf("1. Celsius para Fahrenheit\n2. Fahrenheit para Celsius\nEscolha entre as opções 1 ou 2: ");
    scanf("%d", &opcao);

    if(opcao == 1) {
        printf("Graus Celsius: ");
        scanf("%f", &temp);
        conv = (temp * 9/5) + 32;
        printf("%.2f C = %.2f F\n", temp, conv);
    } else {
        printf("Graus Fahrenheit: ");
        scanf("%f", &temp);
        conv = (temp - 32) * 5/9;
        printf("%.2f F = %.2f C\n", temp, conv);
    }
    return 0;
}