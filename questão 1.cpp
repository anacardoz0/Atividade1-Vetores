#include <stdio.h>

//Escrever um programa que declare um vetor de reais e leia as notas de 30 alunos

int main(){
	
	float notas[30];
	int i;
	
	for (i=0;i<30; i++){
	printf("Digite as notas: ");
	scanf ("%f", &notas[i]);
}

for (i=0;i<30; i++){
	printf("Notas %d: %d\n", i, notas[i]);
}
	
	return 0;
}
