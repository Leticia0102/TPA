/*
Função: 
Autor(a): Letícia Alves de Pontes
Data de criação: 30/09/2019
Data de alteração: 30/09/2019
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
	printf("A idade em anos é %i e a idade em dias é %i", idadeano, idadedia);
	return 0;
}
