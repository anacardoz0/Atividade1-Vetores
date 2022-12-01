/*                   ----------Questão 01----------
Desenvolva um programa em C utilizando registro que permita a entrada de nome,
endereço e telefone de 3 pessoas e os imprima ao final.
*/

#include<stdio.h>

typedef struct cadastro{
	char nome[30], endereco[30], telefone[11];
}cadastro;

int main(){

    cadastro usuario[3];
    int a;

    for(a = 0; a < 3; a++){
    printf("Digite o nome: ");
    fgets(usuario[a].nome, 30, stdin);

    printf("Digite o endereco: ");
    fgets(usuario[a].endereco, 30, stdin);

        printf("Informe o telefone |com ddd|: ");
        fgets(usuario[a].telefone, 11, stdin);
    }

    for(a = 0; a < 3; a++){
    	
    	print("\n********************************");
        printf("Nome: %s", usuario[a].nome);
        printf("Endereco: %s", usuario[a].endereco);
        printf("Telefone: %s", usuario[a].telefone);
        print("********************************\n");
    }

    return 0;
}

/*___________________________________________________________________________________________*/

/*                   ----------Questão 02----------
Criar um registro chamado DadosAluno, que armazene o nome e idade de um aluno.
Na função main: criar uma variável que é uma estrutura DadosAluno; ler o nome e a idade
de um aluno e armazenar na variável criada; exibir na tela o nome do aluno e a idade do
aluno.
*/

#include<stdio.h>
#include <string.h>

typedef struct dados_alunos{
	char nome[50], idade [3];
}dados_alunos;

int main(){
	
	dados_alunos aluno; 
	int num, a;
	
	printf("Quantos aluno deseja REGISTAR? ");
	scanf("%d", &num);
	printf("\n");
	
	for(a = 0; a < num; a++){

    printf("Forneca o NOME do aluno: ");
    fgets(aluno.nome, 50, stdin);
    
    printf("\nForneca a IDADE do aluno: ");
    scanf("%d", &aluno.idade);
	}
	
	for(a = 0; a < num; a++){
		printf("\n-------------------------");
        printf("Nome: %s", aluno.nome);
        printf("Idade: %d", aluno.idade);
        printf("-------------------------\n");
    }

	return 0;
}

/*___________________________________________________________________________________________*/

/*                   ----------Questão 03----------
Escreva as instruções necessárias para definir um tipo de ESTRUTURA que contenha
2 elementos, uma “STRING” de 10 caracteres e um INTEIRO:
*/

#include<stdio.h>
#include <string.h>

/*___________________________________________________________________________________________*/

/*                   ----------Questão 04----------
Defina uma estrutura em C para armazenar dados de um veículo (Marca, modelo, cor,
quantidade de portas, motorização), crie uma função para armazenar os dados de 10
veículos, outra para mostrar os dados armazenados, a função main() deve conter um
pequeno menu para chamar as funções criadas.
*/

#include<stdio.h>
#include <string.h>

typedef struct veiculo{
	char marca[10], modelo[10], cor[20], motorizacao[30];
	int qt_porta;
}veiculo;

veiculo carro[2];

void inserir_dados(){
	
	int i;
	
	for (i = 0; i < 10; i++){
    printf("Informe a marca do veiculo |%d|: ", i+1);
    fgets(carro[i].marca, 10, stdin); 
    printf("Informe o modelo do veiculo |%d|: ", i+1);
    fgets(carro[i].modelo, 10, stdin);
    printf("Informe a cor do veiculo |%d|: ", i+1);
    fgets(carro[i].cor, 20, stdin);
    printf("Informe a motorizacao do veiculo |%d|: ", i+1);
    fgets(carro[i].motorizacao, 30, stdin);
    printf("Informe a quantidade de portas do veiculo |%d|: ", i+1);
    scanf("%d", &carro[i].qt_porta);
        fflush(stdin);
    }
	
}

void mostrar_dados(){
	
	int i;

    for (i = 0; i < 10; i++){
    print("\n-------------------------------------------");
    printf("Marca do veiculo |%d|: %s",i+1, carro[i].marca);
    printf("Modelo do veiculo |%d|: %s",i+1, carro[i].modelo);
    printf("Cor do veiculo |%d|: %s",i+1, carro[i].cor);
    printf("Motorizacao do veiculo |%d|: %s",i+1, carro[i].motorizacao);
    printf("O veiculo |%d| possui %s portas",i+1, carro[i].qt_porta);
    print("-------------------------------------------\n");
    }
    
}

int main(){
	
	int option, i;
	
	do{
        printf("******* MENU DE OPCOES ******\n");
        printf("|1| Inserir dados");
        printf("|2| Mostrar dados\n");
        scanf("%d", &option);
        fflush(stdin);

        switch (option)
        {
        case 1:
            inserir_dados();
            break;

        case 2:
            mostrar_dados();
            break;

        default:
            break;
        }
    }while(option == 1 || option == 2);
    
    return 0;
}

/*___________________________________________________________________________________________*/

/*                   ----------Questão 05----------
Considerando a estrutura abaixo para representar um vetor, implemente um programa
que calcule a soma de dois vetores, sabendo que: A + B = < (a1 + a2), (b1 + b2), (c1 + c2)
>
struct vetor {
int a;
int b;
int c;
};

*/

#include<stdio.h>
#include <string.h>

typedef struct vetor{
	int a;
    int b;
    int c; 
}vetor;

int main(){

    vetor v[2];
    int a, b;
    
    v[0].a = 2;
    v[0].b = 5;
    v[0].c = 11;
    v[1].a = 12;
    v[1].b = 9;
    v[1].c = 4;

    a = v[0].a + v[0].b + v[0].c;
    b = v[1].a + v[1].b+ v[1].c;

    printf("Soma dos vetores eh = %d", a+b);

    return 0;
}

/*___________________________________________________________________________________________*/

/*                   ----------Questão 06----------
Definir a estrutura cuja representação gráfica é dada a seguir, definir os campos com
os tipos básicos necessários.

a) Crie um vetor Cadastro com 5 elementos. ok
b) Permita ao usuário entrar com dados para preencher esses 5 cadastros. ok
c) Encontre a pessoa com maior idade entre os cadastrados. ok
d) Encontre as pessoas do sexo masculino. ok
e) Encontre as pessoas com salário maior que 1000. ok
f) Imprima os dados da pessoa cuja identidade seja igual a um valor fornecido pelo
usuário
*/

#include<stdio.h>
#include <string.h>

typedef struct endereco{
	
	char rua[15], bairro[15], cidade[30], estado[2], cep[8];
	
}endereco;

typedef struct cadastro{
	
  char nome[50], rg[9], cpf[11], estadocivil[10], telefone[11], sexo[10];
  int idade;
  float salario;
  endereco end;
  	
}cadastro;

int main(){
	
	cadastro clients;
	int choice;
	int i, maior_idade;
	
	printf("Deseja cadastrar quantas pessoas |MAX 5|? ");
	scanf("%d", &choice);
	
	for(i = 0; i < choice; i++){
		
	printf("Informe o nome: ");
	fgets(clients.nome, 50, stdin);
	
	printf("Informe o RG: ");
	fgets(clients.rg, 9, stdin);
	
	printf("Informe o CPF: ");
	fgets(clients.cpf, 11, stdin);
	
	printf("Informe o estado civil: ");
	fgets(clients.estadocivil, 10, stdin);
	
	printf("\nInforme o telefone |com ddd|: ");
	fgets(clients.telefone, 11, stdin);
	
	printf("Informe a idade: ");
	scanf("%d", clients.idade);
	
	printf("Informe o sexo | F= feminino, M= maculino, ND= nao definido|: ");
	fgets(clients.sexo, 10, stdin);
	
	printf("Informe o salario: ");
	scanf("%d", clients.salario);
	
	printf("\n*****ENDERECO*****");
	printf("Informe a rua: ");
	fgets(clients.end.rua, 15, stdin);
	
	printf("Informe o bairro: ");
	fgets(clients.end.bairro, 15, stdin);
	
	printf("Informe a cidade: ");
	fgets(clients.end.cidade, 30, stdin);
	
	printf("Informe o estado |Sigla. ex = SP(São Paulo)|: ");
	fgets(clients.end.estado, 2, stdin);
	
	printf("Informe o CEP: ");
	fgets(clients.end.cep, 8, stdin);
	}
	
	maior_idade = 0;

    for(i = 0; i < choice; i++){
        if(clients.idade > maior_idade){
            maior_idade = clients.idade;
        }

        if(clients.sexo == 'm' || 'M'){
            printf("O cliente %d e do sexo masculino\n", i);

        if(clients.salario > 1000){
            printf("O cliente %d tem o salario maior que 1000\n");
        }
    }
    
    int imp;

    printf ("Qual identidade (RG) esta procurando? ");
    scanf("%d", &imp);

    for ( i = 0; i < choice; i++)
    {
      if (imp == clients.rg)
      {
        printf("A pessoa %d eh a pessoa buscada pelo a identidade %d", i, clients.rg);
      }
      
    }

}
return 0;
}