/*
Função: Exercício Teatro
Autores: Erik Henrique Alves; Letícia Alves de Pontes
Data de Início: 20/11/2019
Data de Finalização: 04/12/2019

Problemas:
	
	
Concluídos:
	- Opção 1
	- Opção 2
	- Opção 3
	- Opção 4
	- Opção 5
	- Opção 6
	- Opção 7 -> Zerar a variável 'nomeEspetáculo'
	- Opção 8
	- Impedir de usar algumas funções
	
*/

#include <iostream>
#include <locale.h>
#include <string.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
    /*Variáveis*/
    char acentos[50][10], abrirEspetaculo = 'o', nomeEspetaculo[40] = "NULO", encerrarEspetaculo = 'o', codSimNao = 'o', codDigitado = 'o';
    
    int opcao, x, y, cancelarReservar = 0, codigoAcessoEspetaculo = 0;
    
	float valorIngresso = 30.00, valorPagar = 0.00, porcOcupados = 0.00;
    
    /*Contadores*/
    int cont = 0, i = 0, a = 1, b = 1, comprado = 0, reservado = 0, livre = 0, pular = 0, ocupados = 0, continuar = 0, tipoCompra[50][10];
    
    char funcionando = 'S', tamNomeEspetaculo[40] = "NULO", nomeEspetaculoRecebido[40] = "NULO";
    
    float totalRecebido = 0.00;
    
    /*Exercício*/
    
    while (funcionando = 'S') {
    	
    	strcpy (tamNomeEspetaculo, "NULO");
    	strcpy (nomeEspetaculo, "NULO");
    	
    	
    	/*Iniciando o espetáculo*/
    	while (strcat(tamNomeEspetaculo, nomeEspetaculo) and continuar == 0) {
    		
    		printf ("\n+---------------------------------------------------+\n");
			printf ("| 2. Abrir um espetáculo			    |\n");
			printf ("+---------------------------------------------------+\n");
			
			printf ("\nEscolha o que deseja fazer: ");
	   		scanf (" %i", &opcao);
	   		
	   		while (opcao != 2) {
    		
    			printf ("\nOpção inválida. Digite novamente: ");
    			scanf (" %i", &opcao);
    		
			}

    	
			/*Abrir um espetáculo (com isso iremos zerar os espaços e colocar todas as cadeiras disponíveis)*/
			if (opcao == 2) {
		
				printf ("\nVocê deseja abrir um espetáculo? (S/N) ");
				scanf (" %c", &abrirEspetaculo);
			
				while (abrirEspetaculo != 'S' and abrirEspetaculo != 'N') {
				
					printf ("\nResposta inválida. Digite novamente: ");
					scanf (" %c", &abrirEspetaculo);
					
				}
		 
				if (abrirEspetaculo == 'S') {
				
					printf ("\nJá possui um código de acesso? (S/N) ");
					scanf (" %c", &codSimNao);
				
					while (codSimNao != 'S' and codSimNao != 'N') {
				
						printf ("\nResposta inválida. Digite novamente: ");
						scanf (" %c", &codSimNao);
				
					}
				
					if (codSimNao == 'N') {
					
						codigoAcessoEspetaculo += 1;
						printf ("\nO seu código é %i \n", codigoAcessoEspetaculo);
					
					}
					
					printf ("\nInsira o código de acesso: ");
					scanf (" %i", &codDigitado);
				
					if (codDigitado == codigoAcessoEspetaculo) {
				
						printf ("\nQual o nome do espetáculo? ");
						scanf (" %s", &nomeEspetaculoRecebido);	
    		
    					livre = 500;
			
						printf ("\nO espetáculo %s foi aberto.", nomeEspetaculoRecebido);
						
						continuar = 1;
					
						for(i = 0; i < 50; i++) {
        					for(cont = 0; cont < 10; cont++) {
        						acentos[i][cont] = 'D';
        					}
    					}
				
					} else {
				
						printf ("\nCódigo inválido.");
				
					}
				}
				
			}
		}
		
		strcpy (nomeEspetaculo, nomeEspetaculoRecebido);
    	
    	printf ("\n\nEspetáculo do momento: %s", nomeEspetaculo);
    	
    	printf ("\n+---------------------------------------------------+\n");
    	printf ("| 1. Informar o valor do ingresso e tamanho da sala |\n");
		printf ("| 2. Abrir um espetáculo			    |\n");
		printf ("| 3. Reservar ou cancelar a reserva de um lugar     |\n");
		printf ("| 4. Vender um lugar (inteira)	   	   	    |\n");
		printf ("| 5. Vender um lugar (meia)			    |\n");
		printf ("| 6. Verificar mapa do teatro		   	    |\n");
		printf ("| 7. Encerrar o espetáculo			    |\n");
		printf ("| 8. Verificar parciais				    |\n");
		printf ("| 9. Encerrar o programa               	  	    |\n");
		printf ("+---------------------------------------------------+\n");
	
	    printf ("\nEscolha o que deseja fazer: ");
	    scanf (" %i", &opcao);
	    
    	while (opcao > 9 or 0 > opcao) {
    		
    		printf ("\nOpção inválida. Digite novamente: ");
    		scanf (" %i", &opcao);
    		
		}
    
    
    	/*Informar o valor do ingresso e tamanho da sala*/
  		if (opcao == 1) {
    	
    		printf ("\nO valor do ingresso é R$%f\nO teatro suporta 500 pessoas.", valorIngresso);
			
    		
    	} else if (opcao == 2) {
    		
    		continuar = 1;
    		
    		printf ("\nNão é possível executar essa ação pois já existe um espetáculo aberto. \n");
    		
			
		/*Reservar ou cancelar a reserva de um lugar*/
		} else if (opcao == 3) {
				
			printf ("\nInsira o lugar:\n");
			scanf (" %i", &x);
			scanf (" %i", &y);
					
			while (x > 50 or 0 > x or y > 10 or 0 > y) {
						
				printf ("\nPosições inválidas. Digite novamente: ");
				scanf (" %i", &x);
				scanf (" %i", &y);
						
			}
			
			printf ("\nDigite 1 para reservar um lugar e 2 para cancelar uma reserva: ");
			scanf (" %i", &cancelarReservar);
			
			/*Reservar*/
			if (cancelarReservar == 1) {
				
				
				while (acentos[x-1][y-1] == 'C') {
					
					printf ("\nEsse lugar já foi comprado. Escolha outro lugar.");

					printf ("\nInsira o lugar:\n");
					scanf (" %i", &x);
					scanf (" %i", &y);
				
				}
				
				while (acentos[x-1][y-1] == 'R') {
					
					printf ("\nEsse lugar já foi reservado. Escolha outro lugar.");

					printf ("\nInsira o lugar:\n");
					scanf (" %i", &x);
					scanf (" %i", &y);
				
				}
			
				valorPagar = valorIngresso * 0.6;
			
				printf ("\nO valor a ser pago é R$%f", valorPagar);
					
				acentos[x-1][y-1] = 'R';
				
				tipoCompra[x-1][y-1] = 1;
				
				reservado += 1;
				livre -= 1;
						
				totalRecebido += valorPagar;
			
			
			/*Cancelar*/
			} else if (cancelarReservar == 2) {	
			
				while (acentos[x-1][y-1] == 'D') {
					
					printf ("\nO lugar não foi reservado.\n");
						
					printf ("\nDigite 0 para digitar outro lugar e 1 para voltar para o menu: ");
					scanf (" %i", &pular);
				
					if (pular == 0) {
						
						opcao = 3;
					
					} else if (pular == 1) {
					
						opcao = 0;
					
					}
			
				}

				if (acentos[x-1][y-1] == 'R') {
				
					acentos[x-1][y-1] = 'D';
					
					reservado -= 1;
					livre += 1;
					
					totalRecebido -= 18.00;
					
					printf ("\nA reserva foi cancelada.\n");
			
				}
			
			} else {
				
				printf ("\nCódigo inválido.");
				
			}
		
		
		/*Vender um lugar (inteira)*/
		} else if (opcao == 4) {
			
			printf ("\nInsira o lugar:\n");
			scanf (" %i", &x);
			scanf (" %i", &y);
			
			while (x > 50 or 0 > x or y > 10 or 0 > y) {
				
				x = 0;
				y = 0;
						
				printf ("\nPosições inválidas. Digite novamente: ");
				scanf (" %i", &x);
				scanf (" %i", &y);
						
			}
			
			while (acentos[x-1][y-1] == 'C') {
			
				printf ("\nO acento já foi comprado. Escolha outro lugar: ");
				scanf (" %i", &x);
				scanf (" %i", &y);
			
			}
		
			if (acentos[x-1][y-1] == 'D') {
				
				valorPagar = valorIngresso * 0.6;
				
				printf ("\nO lugar foi comprado");
			
				printf ("\nO valor a ser pago é R$%f", valorPagar);
			
				acentos[x-1][y-1] = 'C';
				
				comprado += 1;
				livre -= 1;
				
				totalRecebido += valorPagar;
				
			} else if (acentos[x-1][y-1] == 'R') {
			
				valorPagar = valorIngresso * 0.4;
			
				printf ("\nO lugar foi comprado");
				
				printf ("\nO valor a ser pago é R$%f", valorPagar);
						
				acentos[x-1][y-1] = 'C';
				
				comprado += 1;
				livre -= 1;
							
				totalRecebido += valorPagar;
				
			} else {
				
				printf ("\nCódigo inválido.");
				
			}
		
		
	
		/*Vender um lugar (meia)*/
		} else if (opcao == 5) {
			
			printf ("\nInsira o lugar:\n");
			scanf (" %i", &x);
			scanf (" %i", &y);
				
			while (x > 50 or 0 > x or y > 10 or 0 > y) {
				
				x = 0;
				y = 0;
					
				printf ("\nPosições inválidas. Digite novamente: ");
				scanf (" %i", &x);
				scanf (" %i", &y);
						
			}
			
			while (acentos[x-1][y-1] == 'C') {
			
				printf ("\nO acento já foi comprado. Escolha outro lugar: ");
				scanf (" %i %i", &x, &y);
			
			}
		
			if (acentos[x-1][y-1] == 'D') {
				
				valorPagar = (valorIngresso * 0.6)/2;
			
				printf ("\nO valor a ser pago é R$%f", valorPagar);
		
				acentos[x-1][y-1] = 'C';
				
				comprado += 1;
				livre -= 1;
				
				totalRecebido += valorPagar;
				
			} else if (acentos[x-1][y-1] == 'R') {
			
				valorPagar = (valorIngresso * 0.4)/2;
			
				printf ("\nO valor a ser pago é R$%f", valorPagar);
			
				acentos[x-1][y-1] = 'C';
				
				comprado += 1;
				livre -= 1;
				
				totalRecebido += valorPagar;	
				
			} else {
				
				printf ("\nCódigo inválido.");
				
			}
			
			
		
		/*Verificar mapa do teatro*/
		} else if (opcao == 6) {
			
			printf ("\n\n");
			
			for (a = 0; a < 50; a++) {
				
				for (b = 0; b < 10; b++) {
						
					printf ("| %c |   ", acentos[a][b]);
					
				}
				
				printf ("\n\n");
				
			}
			
		
		/*Encerrar o espetáculo*/
		} else if (opcao == 7) {
    		
    		printf ("\nInsira o código de acesso: ");
    		scanf (" %i", &codDigitado);
    		
    		if (codDigitado == codigoAcessoEspetaculo) {
    			
    			printf ("\nDeseja mesmo encerrar o espetáculo '%s'? (S/N) ", nomeEspetaculo);
				scanf (" %c", &encerrarEspetaculo);
				
				while (encerrarEspetaculo != 'S' and encerrarEspetaculo != 'N') {
				
					printf ("\nResposta inválida. Digite novamente: ");
					scanf (" %c", &encerrarEspetaculo);
				
				}
			
				if (encerrarEspetaculo == 'S') {
					
					nomeEspetaculo == "";
		
					ocupados = reservado + comprado;
						
					if (ocupados >= 300) {
					
						printf ("\nO espetáculo poderá ser executado.");
			
					} else if (ocupados < 300) {
				
						printf ("\nO espetáculo não poderá ser executado.");
					
					}
						
					printf ("\nO espetáculo foi encerrado.\n");
					
					totalRecebido = 0.00;
					
					strcpy (nomeEspetaculo, "NULO");
					
					continuar = 0;
				
				}
				
			} else {
				
				printf ("\nCódigo inválido.");
				
			}
			

		/*Verificar parciais*/	
		} else if (opcao == 8) {
			
			printf ("\n%i lugares foram reservados, %i lugares foram comprados e %i lugares estão livres.", reservado, comprado, livre);
			
			printf ("\nForam recebidos até o momento R$%f ", totalRecebido);
			
			for(i = 0; i<50; i++) {
				
        		for(cont = 0; cont<10; cont++) {
            		
            		if (acentos[i][cont] != 'D') {
            			
            			ocupados += 1;
            			
					}
            		
        		}
    		}	
			
			if (ocupados >= 300) {
	
				printf ("\nO espetáculo pode ser executado. Ele possui mais de 300 lugares ocupados.");
					
			} else if (ocupados < 300) {
					
				printf ("\nO espetáculo não pode ser executado. Ele possui menos de 300 lugares ocupados.");
				
			}
			
		} else if (opcao == 9) {
			
			break;
			
		}
		
	}	
	system ("pause");
}
