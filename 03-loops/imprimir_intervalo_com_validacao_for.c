#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num1, num2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    if (num1 >= num2) {
        printf("Intervalo incorreto. O primeiro número deve ser menor que o segundo.\n");
        return 1;
    }

    for (int i = num1; i <= num2; i++) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
