/*
Fun��o: calcula o valor do sal�rio com aumento
Autor(a): Let�cia Alves de Pontes
Data de cria��o: 30/09/2019
Data de altera��o: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float salarioatual, aumento, salarionovo;
	printf("Informe o valor do sal�rio atual: ");
	scanf("%f", &salarioatual);
	printf("Informe a porcentagem de aumento: ");
	scanf("%f", &aumento);
	salarionovo = salarioatual + salarioatual*aumento/100;
	printf("O valor do sal�rio novo � R$%f", salarionovo);
	return 0;
}
