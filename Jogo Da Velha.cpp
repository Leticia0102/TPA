/*
Função: Jogo da Velha
Nome: Erik Henrique Alves e Letícia Alves de Pontes
Data de Criação: 23/10/2019
Data de Alteração: 20/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	char velha[3][3];
	char nome1[50], nome2[50], letra1, letra2, again;
	int jogar = 1, x = 0, y = 0, jogadas = 0, vez = 1, ponto1 = 0, ponto2 = 0, opcao = 0, a = 0, b = 0;
	
	printf ("+-----------------+\n");
	printf ("|* JOGO DA VELHA *|\n");
	printf ("+-----------------+\n\n");
	
/* DEFINE OS JOGADORES */	
	printf("Nome do Jogador 1: ");
	scanf(" %s", &nome1);
	printf("Nome do Jogador 2: ");
	scanf(" %s", &nome2);
	
/* JOGO DA VELHA */
	while (jogar != 0){
		
		/* DEFINE OS SÍMBOLOS DE CADA JOGADOR */
		printf("\nOpção 1 (Jogador 1: X e Jogador 2: O) ou Opção 2 (Jogador 1: O e Jogador 2: X)? ");
		scanf (" %i", &opcao);
		
		while (opcao != 1 and opcao != 2) {
			printf("\nOpção inválida. Insira novamente: ");
			scanf(" %i", &opcao);
		}
		
		if (opcao == 1) {
			letra1 = 'X';
			letra2 = 'O';
		} else if (opcao == 2) {
			letra1 = 'O';
			letra2 = 'X';
		}
		
		printf("\nJogador 1: %c \nJogador 2: %c", letra1, letra2);
		
		/* AS POSIÇÕES SÃO INICIALIZADAS (É DECLARADO UM VALOR ' ' PARA CADA POSIÇÃO) */
		for (a = 0; a < 3; a++) {
			for (b = 0; b < 3; b++) {
				velha[a][b] = ' ';
			}
		}
		
		/* CONTAGEM DAS RODADAS */
		for (jogadas = 0; jogadas < 9; jogadas++) {
			for (vez = 0; vez < 2; vez++) {
			
				/* JOGADAS */
				printf ("\n\nDIGITE AS COORDENADAS (VALORES DE 1 A 3)\n");
				
				printf ("\n   %s: %i       %s: %i           \n", nome1, ponto1, nome2, ponto2);
				printf ("\n       1       2       3   ");
				printf ("\n           |       |       \n");
				printf ("  1    %c   |   %c   |   %c   \n", velha[0][0], velha[0][1], velha[0][2]);
				printf ("           |       |       \n");
				printf ("    -------+-------+-------\n");
				printf ("           |       |       \n");
				printf ("  2    %c   |   %c   |   %c   \n", velha[1][0], velha[1][1], velha[1][2]);
				printf ("           |       |       \n");
				printf ("    -------+-------+-------\n");
				printf ("           |       |       \n");
				printf ("  3    %c   |   %c   |   %c   \n", velha[2][0], velha[2][1], velha[2][2]);
				printf ("           |       |       \n");
				
				if (vez == 0) {
					printf ("\nVez de %s \n\n", nome1);
				} else if (vez == 1) {
					printf ("\nVez de %s \n\n", nome2);
				}
			
				printf ("\nLinha:  ");
				scanf (" %i", &x);
				printf ("Coluna: ");
				scanf (" %i", &y);
				
				while (x > 3 or 1 > x or y > 3 or 1 > y) {
					printf ("\nValor inválido. Insira novamente.\n");
					printf ("Linha:  ");
					scanf (" %i", &x);
					printf ("Coluna: ");
					scanf (" %i", &y);
				}
			
				while (velha[x-1][y-1] != ' ') {
					printf ("\nPosição já ocupada. Insira novamente.\n\n");
					printf ("Linha:  ");
					scanf (" %i", &x);
					printf ("Coluna: ");
					scanf (" %i", &y);
				}
				
				/* AS POSIÇÕES RECEBEM UM VALOR */
				if (vez == 0) {
					velha[x-1][y-1] = letra1;
				} else if (vez == 1) {
					velha[x-1][y-1] = letra2;
				}
			
				/* CONFERE SE UM JOGADOR GANHOU OU SE O JOGO EMPATOU */
				if ((velha[0][0] == letra1 and velha[1][1] == letra1 and velha[2][2] == letra1)||
					(velha[2][0] == letra1 and velha[1][1] == letra1 and velha[0][2] == letra1)||
					(velha[0][0] == letra1 and velha[0][1] == letra1 and velha[0][2] == letra1)||
					(velha[1][0] == letra1 and velha[1][1] == letra1 and velha[1][2] == letra1)||
					(velha[2][0] == letra1 and velha[2][1] == letra1 and velha[2][2] == letra1)||
					(velha[0][0] == letra1 and velha[1][0] == letra1 and velha[2][0] == letra1)||
					(velha[0][1] == letra1 and velha[1][1] == letra1 and velha[2][1] == letra1)||
					(velha[0][2] == letra1 and velha[1][2] == letra1 and velha[2][2] == letra1)) {
					
					printf ("\n   %s: %i       %s: %i           \n", nome1, ponto1, nome2, ponto2);	
					printf ("\n      1       2       3   ");	
					printf ("\n          |       |       \n");
					printf (" 1    %c   |   %c   |   %c   \n", velha[0][0], velha[0][1], velha[0][2]);
					printf ("          |       |       \n");
					printf ("   -------+-------+-------\n");
					printf ("          |       |       \n");
					printf (" 2    %c   |   %c   |   %c   \n", velha[1][0], velha[1][1], velha[1][2]);
					printf ("          |       |       \n");
					printf ("   -------+-------+-------\n");
					printf ("          |       |       \n");
					printf (" 3    %c   |   %c   |   %c   \n", velha[2][0], velha[2][1], velha[2][2]);
					printf ("          |       |       \n");
					
					ponto1 = ponto1 + 1;
					
					printf ("\n%s GANHOU\n\nDeseja jogar novamente (S/N)? ", nome1);
					scanf (" %c", &again);
					
					while (again != 'S' and again != 's' and again != 'N' and again != 'n') {
						printf ("Resposta inválida. Digite novamente: ");
						scanf (" %c", &again);
					}
					
					if (again == 'S' or again == 's') {
						
						jogadas = 0;
						vez -= 1;
						
						/* AS POSIÇÕES SÃO REINICIALIZADAS (É DECLARADO UM VALOR ' ' PARA CADA POSIÇÃO) */
						for (a = 0; a < 3; a++) {
							for (b = 0; b < 3; b++) {
								velha[a][b] = ' ';
							}
						}
						
					} else if (again == 'N' or again == 'n') {
						
						printf ("\nFIM DE JOGO\n\n%s: %i           %s: %i\n\n", nome1, ponto1, nome2, ponto2);
						jogar = 0;
						return 0;
						
					}
					
				} else if ((velha[0][0] == letra2 and velha[1][1] == letra2 and velha[2][2] == letra2) ||
					(velha[2][0] == letra2 and velha[1][1] == letra2 and velha[0][2] == letra2) ||
					(velha[0][0] == letra2 and velha[0][1] == letra2 and velha[0][2] == letra2) ||
					(velha[1][0] == letra2 and velha[1][1] == letra2 and velha[1][2] == letra2) ||
					(velha[2][0] == letra2 and velha[2][1] == letra2 and velha[2][2] == letra2) ||
					(velha[0][0] == letra2 and velha[1][0] == letra2 and velha[2][0] == letra2) ||
					(velha[0][1] == letra2 and velha[1][1] == letra2 and velha[2][1] == letra2) ||
					(velha[0][2] == letra2 and velha[1][2] == letra2 and velha[2][2] == letra2)) {
						
					printf ("\n   %s: %i       %s: %i           \n", nome1, ponto1, nome2, ponto2);	
					printf ("\n      1       2       3   ");	
					printf ("\n          |       |       \n");
					printf (" 1    %c   |   %c   |   %c   \n", velha[0][0], velha[0][1], velha[0][2]);
					printf ("          |       |       \n");
					printf ("   -------+-------+-------\n");
					printf ("          |       |       \n");
					printf (" 2    %c   |   %c   |   %c   \n", velha[1][0], velha[1][1], velha[1][2]);
					printf ("          |       |       \n");
					printf ("   -------+-------+-------\n");
					printf ("          |       |       \n");
					printf (" 3    %c   |   %c   |   %c   \n", velha[2][0], velha[2][1], velha[2][2]);
					printf ("          |       |       \n");
					
					ponto2 = ponto2 + 1;
					
					printf("\n%s GANHOU\n\nDeseja jogar novamente (S/N)? ", nome2);
					scanf (" %c", &again);
					
					while (again != 'S' and again != 's' and again != 'N' and again != 'n') {
						printf ("Resposta inválida. Digite novamente: ");
						scanf (" %c", &again);
					}
					
					if (again == 'S' or again == 's') {
						
						jogadas = 0;
						vez -= 1;
						
						/* AS POSIÇÕES SÃO REINICIALIZADAS (É DECLARADO UM VALOR ' ' PARA CADA POSIÇÃO) */
						for (a = 0; a < 3; a++) {
							for (b = 0; b < 3; b++) {
								velha[a][b] = ' ';
							}
						}
						
					} else if (again == 'N' or again == 'n') {
						
						printf ("\nFIM DE JOGO\n\n%s: %i           %s: %i\n\n", nome1, ponto1, nome2, ponto2);
						jogar = 0;
						return 0;
						
					}
					
				} else if (velha[0][0] != ' ' and velha[0][1] != ' ' and velha[0][2] != ' ' and 
					velha[1][0] != ' ' and velha[1][1] != ' ' and velha[1][2] != ' ' and 
					velha[2][0] != ' ' and velha[2][1] != ' ' and velha[2][2] != ' ') {
						
						printf ("\n   %s: %i       %s: %i           \n", nome1, ponto1, nome2, ponto2);
						printf ("\n      1       2       3   ");
						printf ("\n          |       |       \n");
						printf (" 1    %c   |   %c   |   %c   \n", velha[0][0], velha[0][1], velha[0][2]);
						printf ("          |       |       \n");
						printf ("   -------+-------+-------\n");
						printf ("          |       |       \n");
						printf (" 2    %c   |   %c   |   %c   \n", velha[1][0], velha[1][1], velha[1][2]);
						printf ("          |       |       \n");
						printf ("   -------+-------+-------\n");
						printf ("          |       |       \n");
						printf (" 3    %c   |   %c   |   %c   \n", velha[2][0], velha[2][1], velha[2][2]);
						printf ("          |       |       \n");
					
						printf ("\nEMPATE!!!\n\nO JOGO SÓ IRÁ ENCERRAR QUANDO ALGUÉM GANHAR UMA RODADA");
						
						/* AS POSIÇÕES SÃO REINICIALIZADAS (É DECLARADO UM VALOR ' ' PARA CADA POSIÇÃO) */
						for (a = 0; a < 3; a++) {
							for (b = 0; b < 3; b++) {
								velha[a][b] = ' ';
							}
						}
				}
				
			}
		}
	}
	system ("pause");
}	     
