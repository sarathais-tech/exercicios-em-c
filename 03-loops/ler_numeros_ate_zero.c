#include <stdio.h>

int main() {
    int numero;


    while (1) {
        printf("Digite um numero inteiro (digite 0 para sair): ");
        scanf("%d", &numero);

        /
        if (numero == 0) {
            printf("Programa encerrado.\n");
            break;
        }


        printf("Voce digitou: %d\n", numero);
    }

    return 0;
}

