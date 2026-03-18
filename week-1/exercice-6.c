#include <stdio.h>

int main() {

    int x, div = 0;
        printf("Digite um numero: ");
        scanf("%d", &x);

    for(int i = 1; i <= x; i++) {
        if(x % i == 0) div++;
    }

    if(div == 2) 
        printf("o numero %d e primo.\n", x);
    else 
        printf("o numero %d nao e primo.\n", x);

    return 0;
}