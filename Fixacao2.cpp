/*
Fun��o: converte Celsius em Fahrenheit
Autor(a): Let�cia Alves de Pontes
Data de cria��o: 30/09/2019
Data de altera��o: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float cel, fah;
	printf("Informe a temperatura em Celsius: ");
	scanf("%f", &cel);
	fah = (cel*1.8) + 32.0;
	printf("A temperatura em Fahrenheit � de %f graus", fah);
	return 0;
}
