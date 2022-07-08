#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int option = 0;
	while (option != 3){
		printf("Digite uma opção \n 1 - Cadastrar Produto \n 2 - Consultar Produto \n 3 - Sair \n");
		scanf("%d", &option);
		
		switch (option){
			case 1 : {
				printf("Cadastrando Produto... \n");
				system("pause");
				break;
			}
			case 2 : {
				printf("Consultando Produto... \n");
				system("pause");
				break;
			}
			case 3 : {
				system("pause");
				break;
			}
			default : {
				printf("Opcao Invalida \n");
				system("pause");
				break;
			}
		}
		
		system("cls");
	}
	
	
	return 0;
}
