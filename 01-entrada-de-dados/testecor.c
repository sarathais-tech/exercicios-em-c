#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){

int number1, number2, produto;

setlocale (LC_ALL, "PORTUGUESE");

printf("Digite o primeiro número inteiro:");
scanf("%d", &number1);

printf("Digite o segundo número inteiro:");
scanf("%d", &number2);

produto= number1*number2;

printf("O valor do produto dos numeros é:%d\n", produto);
system("color 939");

return 0;
}

