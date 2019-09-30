/*
Função: calcula o preço da venda de um terreno retângular
Autor(a): Letícia Alves de Pontes
Data de criação: 30/09/2019
Data de alteração: 30/09/2019
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
	printf("Informe o preço do metro quadrado: ");
	scanf("%f", &metro);
	area = frente * lado;
	preco = area * metro;
	printf("O preço de venda é %f\n", preco);
	return 0;
}
