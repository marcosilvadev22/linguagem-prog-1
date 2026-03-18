#include <stdio.h>

int main() {
    int n[5], 
    s = 0;

        for(int i = 0; i < 5; i++) {

            printf("Digite o numero %d: ", i + 1);
            scanf("%d", &n[i]);

        s += n[i];
    }

    printf("A soma total e: %d\n", s);
        return 0;
}