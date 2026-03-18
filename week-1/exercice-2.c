#include <stdio.h>

int main() {

    int n;
    int fact = 1;
    printf("Digite um numero: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    
    printf("Fatorial de %d e: %d\n", n, fact);
    return 0;
}