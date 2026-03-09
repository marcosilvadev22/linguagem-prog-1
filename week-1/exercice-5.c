#include <stdio.h>
#include <string.h>

int main() {
    char texto[100];
    printf("Digite uma frase: ");
    scanf(" %[^\n]", texto); 

    printf("A string possui %d caracteres.\n", (int)strlen(texto));
    return 0;
}