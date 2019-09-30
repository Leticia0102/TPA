/*
Função: calcula a média das notas de um aluno
Autor(a): Letícia Alves de Pontes
Data de criação: 30/09/2019
Data de alteração: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float nota1, nota2, nota3, nota4, media;
	printf("Informe a 1ª nota: ");
	scanf("%f", &nota1);
	printf("Informe a 2ª nota: ");
	scanf("%f", &nota2);
	printf("Informe a 3ª nota: ");
	scanf("%f", &nota3);
	printf("Informe a 4ª nota: ");
	scanf("%f", &nota4);
	media = (nota1+nota2+nota3+nota4)/4;
	printf("A média do aluno é %f", media);
	return 0;
}
