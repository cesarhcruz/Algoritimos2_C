#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int qtdAluno = 0;
	int qtdNotas = 0;
	
	printf("Bem Vindo a calculo de média da turma \n");
	printf("Digite a quantidade de alunos que voce deseja armazenar?\n");
	fflush(stdin);
	scanf("%d", &qtdAluno);
	printf("Digite a quantidade de notas de cada aluno \n");
	fflush(stdin);
	scanf("%d", &qtdNotas);
	
	float notas[qtdAluno][qtdNotas];
	
	int l,c;
	l = 0;
	
	
	while(l < qtdAluno){
		printf("Aluno %d\n", (l+1));
		c = 0;
		while(c < qtdNotas){
			printf("Digite a nota %d do aluno %d\n", (c+1),(l+1));
			fflush(stdin);
			scanf("%f", &notas[l][c]);
			c++;
		}
		
		l++;
	}
	
	for(l = 0; l < qtdAluno; l++){
		for(c = 0; c < qtdNotas; c++){
			printf("A nota %d do aluno %d é %.2f\n", (c+1),(l+1), notas[l][c]);
		}
	}
}
