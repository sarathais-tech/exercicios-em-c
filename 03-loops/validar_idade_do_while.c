#include <stdio.h>

int main() {
    int idade;

    do {
        printf("Digite a idade (de 1 a 123): ");
        scanf("%d", &idade);


        if (idade < 1 || idade > 123) {
            printf("Idade invalida. Tente novamente.\n");
        }
    } while (idade < 1 || idade > 123);

    printf("Idade digitada: %d\n", idade);

    return 0;
}

