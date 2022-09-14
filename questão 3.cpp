#include <stdio.h>

/*Faça um algoritmo que calcule e escreva o somatório dos valores armazenados numa variável 
composta unidimensional, chamada dados, de até 100 elementos numéricos a serem lidos.
*/

int main (){
	
	int numeros[100];
	int i, soma;

	for (i=0; i<100; i++){
		printf("Digite os respectivos numeros %d: ", i);
		scanf("%f", &numeros[i]);
	}
	
	soma=0;
    for (i=0; i<100; i++){
    soma=soma+numeros[i];
	}
	
	printf("\nSoma: %d", &soma);
	
	return 0;
}
