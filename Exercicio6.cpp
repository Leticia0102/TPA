/*
Função: calcula uma prestação em atraso
Autor(a): Letícia Alves de Pontes
Data de criação: 30/09/2019
Data de alteração: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float valor, taxa, prestacao;
	int tempo;
	printf("Informe o valor da prestação atual: ");
	scanf("%f", &valor);
	printf("Informe o valor da taxa por dia de atraso: ");
	scanf("%f", &taxa);
	printf("Informe o tempo de atraso em dias: ");
	scanf("%i", &tempo);
	prestacao = valor + (valor*(taxa/100)*tempo);
	printf("O valor da prestação em atraso é de R$%f", prestacao);
	return 0;
}
