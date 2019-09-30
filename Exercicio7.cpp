/*
Função: calcula o valor do salário com aumento
Autor(a): Letícia Alves de Pontes
Data de criação: 30/09/2019
Data de alteração: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float salarioatual, aumento, salarionovo;
	printf("Informe o valor do salário atual: ");
	scanf("%f", &salarioatual);
	printf("Informe a porcentagem de aumento: ");
	scanf("%f", &aumento);
	salarionovo = salarioatual + salarioatual*aumento/100;
	printf("O valor do salário novo é R$%f", salarionovo);
	return 0;
}
