/*
Fun��o: calcula o quadrado da soma de tr�s n�meros inteiros
Autor(a): Let�cia Alves de Pontes
Data de cria��o: 30/09/2019
Data de altera��o: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, num3, resultado;
	printf("Informe o primeiro n�mero: ");
	scanf("%i", &num1);
	printf("Informe o segundo n�mero: ");
	scanf("%i", &num2);
	printf("Informe o terceiro n�mero: ");
	scanf("%i", &num3);
	resultado = (num1+num2+num3) * (num1+num2+num3);
	printf("O resultado final � %i \n", resultado);
	return 0;
}
