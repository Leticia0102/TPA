/*
Função: calcula a divisão de um número por outro e exibe o quociente e o resto da divisão
Autor(a): Letícia Alves de Pontes
Data de criação: 30/09/2019
Data de alteração: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int dividendo, divisor, quociente, resto;
	printf("Informe o dividendo: ");
	scanf("%i", &dividendo);
	printf("Informe o divisor: ");
	scanf("%i", &divisor);
	quociente = dividendo/divisor;
	resto = dividendo - divisor*quociente;
	printf("O quociente da divisão é %i e o resto é %i", quociente, resto);
	return 0;
}
