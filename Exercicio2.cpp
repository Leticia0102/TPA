/*
Fun��o: calcula a �rea de um tri�ngulo
Autor(a): Let�cia Alves de Pontes
Data de cria��o: 30/09/2019
Data de altera��o: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float base, altura, area;
	printf("Informe a base do tri�ngulo: ");
	scanf("%f", &base);
	printf("Informe a altura do tri�ngulo: ");
	scanf("%f", &altura);
	area = base * altura / 2;
	printf("A �rea do tri�ngulo � %f \n", area);
	return 0;
}
