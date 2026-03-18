#include <stdio.h>

int main() {
    int x;
    float x1,x2;

    printf("1. Celsius para Fahrenheit\n2. Fahrenheit para Celsius\nEscolha entre as opções 1 ou 2: ");
    scanf("%d", &x);

    if(x == 1) {
        printf("Graus Celsius: ");
        scanf("%f", &x1);
        x2 = (x1 * 9/5) + 32;
        printf("%.2f C = %.2f F\n", x1, x2);
    } else {
        printf("Graus Fahrenheit: ");
        scanf("%f", &x1);
        x2 = (x1 - 32) * 5/9;
        printf("%.2f F = %.2f C\n", x1, x2);
    }
    return 0;
}