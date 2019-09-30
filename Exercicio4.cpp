/*
Função: calcula o quadrado da soma de três números inteiros
Autor(a): Letícia Alves de Pontes
Data de criação: 30/09/2019
Data de alteração: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, num3, resultado;
	printf("Informe o primeiro número: ");
	scanf("%i", &num1);
	printf("Informe o segundo número: ");
	scanf("%i", &num2);
	printf("Informe o terceiro número: ");
	scanf("%i", &num3);
	resultado = (num1+num2+num3) * (num1+num2+num3);
	printf("O resultado final é %i \n", resultado);
	return 0;
}
