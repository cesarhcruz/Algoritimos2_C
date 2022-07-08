#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char pergunta[300];
	
	printf("Digite a Pergunta da pesquisa\n");
	gets(pergunta);
	system("cls");
	
	int option = 0;
	double totalSim = 0;
	double totalNao = 0;
	double totalVotos = 0;
	
	double percentualSim = 0.0;
	double percentualNao = 0.0;
	do {
		printf("%s\n", pergunta);
		printf("Digite 1 - SIM, 2 - NAO, 3 - ENCERRAR PESQUISA \n");
		scanf("%d", &option);
		system("cls");
		
		switch(option){
			case 1 : {
				totalSim = totalSim + 1;
				totalVotos = totalVotos + 1;
				break;
			}
			
			case 2 : {
				totalNao = totalNao + 1;
				totalVotos = totalVotos + 1;
				break;
			}
			
			case 3 : {
				percentualSim = (totalSim * 100) / totalVotos;
				percentualNao = (totalNao * 100) / totalVotos;
				printf("Resultado da Pesquisa\n\n");
				printf("%s\n", pergunta);
				printf("SIM -> %.2f\n", percentualSim);
				printf("NAO -> %.2f\n", percentualNao);
				break;
			}
			
			default : {
				printf("Opcao Invalida\n");
				system("pause");
				system("cls");
				break;
			}
		}
		
	} while (option != 3);
	
	return (0);
}
