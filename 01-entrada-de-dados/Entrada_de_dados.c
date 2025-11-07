#include <stdio.h>
#include <locale.h>

int main (void){
	char nome[50];
	char email[50];
	int livros;
	float salario;
	
	setlocale (LC_ALL,"portuguese");
	
	printf("Digite Seu nome:");
	gets(nome);
	
	
	printf("Digite Seu email:");
	scanf("%s", email);
	
	
	printf("Digite sua quantidade de livros lidos no ano anterior:");
	scanf("%d",& livros);
	
	printf("Digite seu salario R$:");
	scanf("%f", & salario);
	
	printf("Digite seu nome:%s \n", nome);
	
	printf("Digite seu email:%s \n", email);
	
	printf("Digite sua quantidade de livros lidos no ano anterior:%d \n", livros);
	
	printf("Digite seu salario R$:%.2f \n", salario);
	
	return 0;
}

