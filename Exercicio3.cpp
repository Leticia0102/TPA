/*
Fun��o: calcula a �rea de um c�rculo
Autor(a): Let�cia Alves de Pontes
Data de cria��o: 30/09/2019
Data de altera��o: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float PI = 3.1416, area, raio;
	printf("Informe o raio do c�rculo: ");
	scanf("%f", &raio);
	area = PI * raio * raio;
	printf("A �rea do c�rculo � %f", area);
	return 0;
}
