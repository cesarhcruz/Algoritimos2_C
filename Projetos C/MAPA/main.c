#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int option = 0;
	while (option != 4){
		printf("Digite uma opção \n 1 - Cadastrar Vacina \n 2 - Listar Aplicações \n 3 - Consultar CPF \n 4 - Sair \n");
		scanf("%d", &option);
		
		switch (option){
			case 1 : {
				printf("Cadastrando Vacina... \n");
				system("pause");
				break;
			}
			case 2 : {
				printf("Listando... \n");
				system("pause");
				break;
			}
			case 3 : {
				printf("Consultando... \n");
				system("pause");
				break;
			}
			case 4 : {
				printf("Saindo... \n");
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
