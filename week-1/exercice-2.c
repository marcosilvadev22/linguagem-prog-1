#include <stdio.h>

int main() {
    int n;
    long long fatorial = 1;
    printf("Digite um numero: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        fatorial *= i;
    }
    printf("Fatorial de %d e: %lld\n", n, fatorial);
    return 0;
}