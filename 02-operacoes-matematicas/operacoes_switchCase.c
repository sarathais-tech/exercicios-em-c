#include <stdio.h>
#include <math.h>


int lerNumero() {
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    return num;
}


void somar(int num1, int num2) {
    printf("Resultado: %d\n", num1 + num2);
}


void multiplicar(int num1, int num2) {
    printf("Resultado: %d\n", num1 * num2);
}


void dividir(int num1, int num2) {
    if(num2 != 0)
        printf("Resultado: %.2f\n", (float)num1 / num2);
    else
        printf("Erro: divisão por zero.\n");
}


void raizQuadrada(int num) {
    if(num >= 0)
        printf("Resultado: %.2f\n", sqrt(num));
    else
        printf("Erro: número negativo.\n");
}


int exibirMenu() {
    int opcao;
    printf("Programa Calculadora Simples\n");
    printf("(1) Somar dois números inteiros\n");
    printf("(2) Multiplicar dois números inteiros\n");
    printf("(3) Dividir dois números inteiros\n");
    printf("(4) Calcular a raiz quadrada de um número inteiro\n");
    printf("(0) Encerrar o programa\n");
    printf("Sua opção: ");
    scanf("%d", &opcao);
    return opcao;
}

int main() {
    int opcao, num1, num2;

    opcao = exibirMenu();

    switch(opcao) {
        case 1:
            num1 = lerNumero();
            num2 = lerNumero();
            somar(num1, num2);
            break;
        case 2:
            num1 = lerNumero();
            num2 = lerNumero();
            multiplicar(num1, num2);
            break;
        case 3:
            num1 = lerNumero();
            num2 = lerNumero();
            dividir(num1, num2);
            break;
        case 4:
            num1 = lerNumero();
            raizQuadrada(num1);
            break;
        case 0:
            printf("Encerrando o programa.\n");
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}
