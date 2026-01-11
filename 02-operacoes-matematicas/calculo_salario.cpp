#include <stdio.h>
#include <stdlib.h>

float calculaSalario(float salario, float porcentagem){
	float novoSalario, aumento;
	
	aumento = salario * (porcentagem/100);
	novoSalario = salario + aumento;
	
	return novoSalario;
}

int main(){
	float salario, porcentagem, novoSalario;
	
	printf("O salario e:");
	scanf("%f", &salario);
	
	printf("Digite a porcentagem de aumento:");
	scanf("%f", &porcentagem);
	
	novoSalario = calculaSalario(salario, porcentagem);
	
	printf("Novo salario:%2.f", novoSalario);
	
	return 0;
}
