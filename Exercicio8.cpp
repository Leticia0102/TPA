/*
Fun��o: calcula a m�dia das notas de um aluno
Autor(a): Let�cia Alves de Pontes
Data de cria��o: 30/09/2019
Data de altera��o: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float nota1, nota2, nota3, nota4, media;
	printf("Informe a 1� nota: ");
	scanf("%f", &nota1);
	printf("Informe a 2� nota: ");
	scanf("%f", &nota2);
	printf("Informe a 3� nota: ");
	scanf("%f", &nota3);
	printf("Informe a 4� nota: ");
	scanf("%f", &nota4);
	media = (nota1+nota2+nota3+nota4)/4;
	printf("A m�dia do aluno � %f", media);
	return 0;
}
