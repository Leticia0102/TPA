/*
Fun��o: calcula uma presta��o em atraso
Autor(a): Let�cia Alves de Pontes
Data de cria��o: 30/09/2019
Data de altera��o: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float valor, taxa, prestacao;
	int tempo;
	printf("Informe o valor da presta��o atual: ");
	scanf("%f", &valor);
	printf("Informe o valor da taxa por dia de atraso: ");
	scanf("%f", &taxa);
	printf("Informe o tempo de atraso em dias: ");
	scanf("%i", &tempo);
	prestacao = valor + (valor*(taxa/100)*tempo);
	printf("O valor da presta��o em atraso � de R$%f", prestacao);
	return 0;
}
