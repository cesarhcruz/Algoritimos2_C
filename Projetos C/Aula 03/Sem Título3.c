#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int option = 0;
	while (option != 3){
		printf("Digite uma opção \n Cadastrar Produto \n 2 - Consultar Produto \n 3 - Sair");
		scanf("%d", option);
		
		switch (option){
			case 1 : {
				printf("Cadastrando Produto...");
				system("pause");
				break;
			}
			case 2 : {
				printf("Consultando Produto...");
				break;
			}
			case 3 : {
				break;
			}
			default : {
				printf("Opcao Invalida \n");
				break;
			}
		}
	}
	
	return 0;
}
