/*
Fun��o: 
Autor(a): Let�cia Alves de Pontes
Data de cria��o: 30/09/2019
Data de altera��o: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int nasc, idadeano, idadedia, ano;
	printf("Informe o ano de nascimento: ");
	scanf("%i", &nasc);
	printf("Informe o ano atual: ");
	scanf("%i", &ano);
	idadeano = ano - nasc;
	idadedia = (ano - nasc)*365;
	printf("A idade em anos � %i e a idade em dias � %i", idadeano, idadedia);
	return 0;
}
