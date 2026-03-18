#include <stdio.h>
#include <string.h>

int main() {

    char x[100];
    
    printf("Digite uma frase: ");
    scanf(" %[^\n]", x); 

    printf("A string possui %d caracteres.\n", strlen(x));
    return 0;
}