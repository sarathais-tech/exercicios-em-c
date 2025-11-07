#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int start, end;

    printf("Digite o primeiro número do intervalo: ");
    scanf("%d", &start);

    printf("Digite o segundo número do intervalo: ");
    scanf("%d", &end);

    if (start >= end) {
        printf("Intervalo incorreto. O primeiro número deve ser menor que o segundo.\n");
        return 1;
    }

    for (int i = start; i <= end; i++) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
