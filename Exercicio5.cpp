/*
Fun��o: calcula o pre�o da venda de um terreno ret�ngular
Autor(a): Let�cia Alves de Pontes
Data de cria��o: 30/09/2019
Data de altera��o: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float metro, frente, lado, area, preco;
	printf("Informe a medida da frente do terreno em metros: ");
	scanf("%f", &frente);
	printf("Informe a medida da lateral do terreno em metros: ");
	scanf("%f", &lado);
	printf("Informe o pre�o do metro quadrado: ");
	scanf("%f", &metro);
	area = frente * lado;
	preco = area * metro;
	printf("O pre�o de venda � %f\n", preco);
	return 0;
}
