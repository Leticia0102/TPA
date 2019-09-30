/*
Função: calcula a área de um triângulo
Autor(a): Letícia Alves de Pontes
Data de criação: 30/09/2019
Data de alteração: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float base, altura, area;
	printf("Informe a base do triângulo: ");
	scanf("%f", &base);
	printf("Informe a altura do triângulo: ");
	scanf("%f", &altura);
	area = base * altura / 2;
	printf("A área do triângulo é %f \n", area);
	return 0;
}
