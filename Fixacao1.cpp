/*
Função: calcula o IMC de um aluno
Autor(a): Letícia Alves de Pontes
Data de criação: 30/09/2019
Data de alteração: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float peso, altura, imc;
	printf("Informe o peso: ");
	scanf("%f", &peso);
	printf("Informe a altura: ");
	scanf("%f", &altura);
	imc = peso / (altura * altura);
	printf("O IMC é %f", imc);
	return 0;
}
