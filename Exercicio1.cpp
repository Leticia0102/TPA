/*
Fun��o: calcula a �rea de um ret�ngulo
Autor(a): Let�cia Alves de Pontes
Data de cria��o: 30/09/2019
Data de altera��o: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int base, altura, area;
	printf("Informe a base do ret�ngulo: ");
	scanf("%i", &base);
	printf("Informe a altura do ret�ngulo: ");
	scanf("%i", &altura);
	area = base * altura;
	printf("A �rea do ret�ngulo � %i \n", area);
	return 0;
}
