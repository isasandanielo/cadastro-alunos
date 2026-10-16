#include <stdio.h>
#include <stdlib.h>


struct Aluno{
	char nome[50];
	float nota;
}; 

void mostrarAlunos(struct Aluno aluno[]){
	int i;
	for(i=0; i < 3; i++){
		printf("Cadastro do aluno %d\n", i + 1);
		printf("Nome: %s\n Nota: %.2f\n", aluno[i].nome, aluno[i].nota);
	}
}
void mostrarAprovados(struct Aluno aluno[]){
	int i;
	printf("\nAlunos aprovados:\n");
	for(i=0; i < 3; i++){
		if(aluno[i].nota >= 7){
			printf("%s - %.2f", aluno[i].nome, aluno[i].nota);
		}
	}
}

int main(int argc, char *argv[]) {
	int i;
	struct Aluno aluno[3];
	int opcao;
	for(i=0; i < 3; i++){
		printf("Digite o nome do %d aluno: ", i + 1);
		scanf("%s", &aluno[i].nome);
		printf("Digite a nota do %d aluno: ", i + 1);
		scanf("%f", &aluno[i].nota);
	}
	do{
		printf("\n---- Escolha uma opcao----\n");
		printf("[1] Mostrar todos os alunos\n");
		printf("[2] Mostrar todos os alunos aprovados\n");
		printf("[3] Sair\n");
		printf("Opcao desejada: \n");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				mostrarAlunos(aluno);
				break;
			case 2:
				mostrarAprovados(aluno);
				break;
			case 3: 
				printf("Encerrando...");
				break;
			default:
				printf("Opcao inv�lida!");
		}
	}while(opcao != 3);
	
	return 0;
}
