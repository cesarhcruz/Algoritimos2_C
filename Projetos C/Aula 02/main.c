#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int idade;
	
	printf("Digite sua Idade \n");
	scanf("%d", &idade);
	printf("Sua Idade eh %d anos \n", idade);
	
	if (idade >= 18 ){
		printf("Você é maior de idade \n");
	}
	
	else {
		printf("Você é menor de idade \n");
	}
	
	int numSemana;
	
	printf("Digite um número da Semana \n");
	scanf("%d", &numSemana);
	
	switch(numSemana){
		case 1 : {
			printf("Domingo \n");
			break;
		}
		case 2 : {
			printf("Segunda \n");
			break;
		}
		case 3 : {
			printf("Terça \n");
			break;
		}
		case 4 : {
			printf("Quarta \n");
			break;
		}
		case 5 : {
			printf("Quinta \n");
			break;
		}
		case 6 : {
			printf("Sexta \n");
			break;
		}
		case 7 : {
			printf("Sabado \n");
			break;
		}
		default : {
			printf("Número Inválido \n");
			break;
		}
	}
	
	return 0;
}
