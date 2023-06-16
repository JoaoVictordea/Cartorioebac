#include <stdio.h> //Biblioteca de comunicação com o usuario
#include <stdlib.h> //Biblioteca de alocação de espaço na memória
#include <locale.h> //Biblioteca de alocações de texto por região
#include <string.h> //Biblioteca responsável por cuidar das string

int registro()
{	
	int laco =1;
	
	for(laco=1;laco=1;)
	{
	
	printf("###Criação de registros!###\n\n");
	
		char arquivo[40];
		char cpf[40];
		char nome[40];
		char sobrenome[40];
		char cargo[40];
	
	printf("Digite o CPF para fazer o cadastro:");
	scanf("%s", cpf);
	
		strcpy(arquivo, cpf); //Responsavel por copiar os valores das string
	
		FILE *file; //Cria o arquivo
		file = fopen(arquivo, "w"); //Cria o arquivo
		fprintf(file,"CPF:");
		fprintf(file,cpf); //Salva o valor da váriavel
		fprintf(file,"\n\n");
		fclose(file); //Fecha o arquivo
		

	
	printf("Digite o NOME para fazer o cadastro:");
	scanf("%s,",nome);
	
		file = fopen(arquivo, "a");
		fprintf(file,"NOME:");
		fprintf(file,nome);
		fprintf(file,"\n\n");
		fclose(file);
	
	printf("Digite o SOBRENOME para fazer o cadastro:");
	scanf("%s",sobrenome);
	
		file = fopen(arquivo, "a");
		fprintf(file,"SOBRENOME:");
		fprintf(file,sobrenome);
		fprintf(file,"\n\n");
		fclose(file);
	
	printf("Digite o CARGO para fazer o cadastro:");
	scanf("%s",cargo);
	
		file = fopen(arquivo, "a");
		fprintf(file,"CARGO:");
		fprintf(file,cargo);
		fclose(file);
		
		system("cls");
	}
	
}
int consulta()
{ 
	int laco =1;
	
	for(laco=1;laco=1;)
	{
	
	setlocale(LC_ALL, "portuguese");
	
	printf("###Consulta de registros###\n\n");
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF para realizar a consulta: ");
	scanf("%s",cpf);
	printf("\n");
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("CPF não encontrado!");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf(conteudo);
	}
	
	printf("\n\n");
	system("pause");
	system("cls");
	
	}
}
int deletar()
{
	int laco =1;
	
	for(laco=1;laco=1;)
	{
	
	char cpf[40];
	
	printf("Digite o CPF que será deletado: ");
	scanf("%s",cpf);
	
	remove (cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
		if(file == NULL)
		{	
		printf("O registro do usuário foi deletado com sucesso!\n");
		system("pause");
		}
	system("cls");
	}
}
int main()
{
	
	int opcao=0; //Definindo vareáveis
	int laco=1;
	
    for(laco=1;laco=1;)
	{
		system("cls");
	
		setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem

		printf("### Cartório da Ebac ###\n\n"); //Início do menu
		printf("Escolha uma opção desejada do menu:\n\n");
		printf("\t1 - Criar registros\n");
		printf("\t2 - Consultar registros\n");
		printf("\t3 - Deletar registros\n");
	
		printf("Opção: "); //Fim do menu

		scanf("%d", &opcao); //Armazenando a escolha do usuário

		system("cls");
		
		switch(opcao)
		{
			case 1:
			registro();
			break;
			
			case 2:
			consulta();
			break;
			
			case 3:
			deletar();
			break;
			
			default:
			printf("Está opção não é válida!\n\n");
			system("pause");
			break;
		}
		
    }
}
