#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int idade;
	
	printf("Digite sua Idade \n");
	scanf("%d", &idade);
	printf("Sua Idade eh %d anos \n", idade);
	
	if (idade >= 18 ){
		printf("Voc� � maior de idade \n");
	}
	
	else {
		printf("Voc� � menor de idade \n");
	}
	
	int numSemana;
	
	printf("Digite um n�mero da Semana \n");
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
			printf("Ter�a \n");
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
			printf("N�mero Inv�lido \n");
			break;
		}
	}
	
	return 0;
}
