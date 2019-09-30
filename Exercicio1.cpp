/*
Função: calcula a área de um retângulo
Autor(a): Letícia Alves de Pontes
Data de criação: 30/09/2019
Data de alteração: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int base, altura, area;
	printf("Informe a base do retângulo: ");
	scanf("%i", &base);
	printf("Informe a altura do retângulo: ");
	scanf("%i", &altura);
	area = base * altura;
	printf("A área do retângulo é %i \n", area);
	return 0;
}
