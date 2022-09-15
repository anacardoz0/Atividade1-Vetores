#include <stdio.h>

//Altere o algoritmo anterior considerando que não se conhece quantos alunos esta turma tem (menos que 50). O número de aluno será informado pelo usuário.

int main (){
	
	int quantidadeAlunos;
	
	printf("Digite a quantidade de aluno: ");
	scanf("%d", &quantidadeAlunos);
	
	float notas[quantidadeAlunos];
	int i;

	for (i=1; i<=quantidadeAlunos; i++){
		printf("Digite a %d nota: ", i);
		scanf("%f", &notas[i]);
	}

   printf("\n\n");

	for (i=1; i<=quantidadeAlunos; i++){
		printf("Nota %d: ",i);
		printf("%.1f\t", notas[i]);
	}
	
	return 0;
}
