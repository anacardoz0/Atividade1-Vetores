#include <stdio.h>

//Altere o algoritmo anterior considerando que n�o se conhece quantos alunos esta turma tem (menos que 50). O n�mero de aluno ser� informado pelo usu�rio.

int main (){
	
	float notas[30];
	int i, quantidade;
	
	printf("Digite a quantidade de aluno: ");
	scanf("%d", &quantidade);

	for (i=1; i<=quantidade; i++){
		printf("Digite a %d nota: ", i);
		scanf("%f", &notas[i]);
	}
	
	for (i=1; i<=quantidade; i++){
		printf("Nota %d: %f\n", i, notas[i]);
	}
	
	return 0;
}
