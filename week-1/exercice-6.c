#include <stdio.h>

int main() {
    int n, divisores = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) divisores++;
    }

    if(divisores == 2) printf("%d e primo.\n", n);
    else printf("%d nao e primo.\n", n);

    return 0;
}