#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int qtd;
	printf("Digitar a quantidade de notas para armazenar\n");
	scanf("%d", &qtd);
	
	float notas[qtd];
	
	int i;
	for(i = 0; i < qtd; i++){
		printf("Digite a %dº nota\n", (i+1));
		scanf("%f", &notas[i]);
	}
	
	//Escrever notas na tela
	for(i = 0; i < qtd; i++){
		printf("A %dº nota é %.2f\n", (i+1), notas[i] );
	}
	
	char nome[100] = ("Criado por César Cruz");
	printf("%s", nome);
	
}
