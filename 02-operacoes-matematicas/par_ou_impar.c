#include <stdio.h>

// Função para verificar se o número é par ou ímpar
void verificarParImpar(int num) {
    if(num % 2 == 0)
        printf("%d é par.\n", num);
    else
        printf("%d é ímpar.\n", num);
}

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    verificarParImpar(numero);

    return 0;
}
