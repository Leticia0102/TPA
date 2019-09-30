/*
Função: calcula a área de um círculo
Autor(a): Letícia Alves de Pontes
Data de criação: 30/09/2019
Data de alteração: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float PI = 3.1416, area, raio;
	printf("Informe o raio do círculo: ");
	scanf("%f", &raio);
	area = PI * raio * raio;
	printf("A área do círculo é %f", area);
	return 0;
}
