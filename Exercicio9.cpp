/*
Fun��o: calcula a divis�o de um n�mero por outro e exibe o quociente e o resto da divis�o
Autor(a): Let�cia Alves de Pontes
Data de cria��o: 30/09/2019
Data de altera��o: 30/09/2019
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
	printf("O quociente da divis�o � %i e o resto � %i", quociente, resto);
	return 0;
}
