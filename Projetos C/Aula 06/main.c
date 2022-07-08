#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	
	char nomes[3][999];
	int i;
	for(i=0; i < 3; i++){
		printf("Digite um nome\n");
		fflush(stdin);
		gets(nomes[i]);
	}
	
	for(i=0; i < 3; i++){
		printf("%s\n\n", nomes[i]);
		
	}
	
	int numeros[3][3] = {{5, 8, 10},{30, 15, 25},{10, 9, 35}};
	
	int linha;
	int coluna;
	for(linha = 0; linha < 3; linha++){
		for(coluna = 0; coluna <3; coluna++){
			printf("%d, ", numeros[linha][coluna]);
		}
		printf("\n");
	}

}
