/*
Função: calcula a média ponderada de 4 notas
Autor(a): Letícia Alves de Pontes
Data de criação: 30/09/2019
Data de alteração: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float nota1, nota2, nota3, nota4, peso1, peso2, peso3, peso4, media;
	printf("Informe a nota 1: ");
	scanf("%f", &nota1);
	printf("Informe o peso 1: ");
	scanf("%f", &peso1);
	printf("Informe a nota 2: ");
	scanf("%f", &nota2);
	printf("Informe o peso 2: ");
	scanf("%f", &peso2);
	printf("Informe a nota 3: ");
	scanf("%f", &nota3);
	printf("Informe o peso 3: ");
	scanf("%f", &peso3);
	printf("Informe a nota 4: ");
	scanf("%f", &nota4);
	printf("Informe o peso 4: ");
	scanf("%f", &peso4);
	media = (nota1*peso1 + nota2*peso2 + nota3*peso3 + nota4*peso4) / (peso1+peso2+peso3+peso4);
	printf("A média ponderada é %f", media);
	return 0;
}
