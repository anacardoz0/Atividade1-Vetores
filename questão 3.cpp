#include <stdio.h>

/*Fa�a um algoritmo que calcule e escreva o somat�rio dos valores armazenados numa vari�vel 
composta unidimensional, chamada dados, de at� 100 elementos num�ricos a serem lidos.
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
