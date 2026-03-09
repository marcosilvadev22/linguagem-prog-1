#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    return 0;
}