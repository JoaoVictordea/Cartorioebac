#include <stdio.h> //Biblioteca de comunica��o com o usuario
#include <stdlib.h> //Biblioteca de aloca��o de espa�o na mem�ria
#include <locale.h> //Biblioteca de aloca��es de texto por regi�o
#include <string.h> //Biblioteca respons�vel por cuidar das string

int registro()
{	
	int laco =1;
	for(laco=1;laco=1;)
	{
	printf("###Cria��o de registros!###\n\n");
	
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
		fprintf(file,cpf); //Salva o valor da v�riavel
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
		
		int escolha;
		
		printf("###Voc� deseja registrar mais nomes ?###\n\ndigite 1 - para sim\n\ndigite 2 - para n�o\n\n:");
		scanf("%d", &escolha);
		
		switch(escolha)
		{
			case 1:
			printf("Voc� escolheu registrar mais nomes!\n\n");
			system("pause");
			system("cls");
			break;
			
			default:
			printf("Voc� escolheu voltar para o Menu Principal!\n\n");
			system("pause");
			system("cls");
			return 0;
			break;
		}
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
		printf("CPF n�o encontrado!");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf(conteudo);
	}
	
	printf("\n\n");
	system("pause");
	system("cls");
	
		int escolha;
		
		printf("###Voc� deseja consultar mais nomes ?###\n\ndigite 1 - para sim\n\ndigite 2 - para n�o\n\n:");
		scanf("%d", &escolha);
		
		switch(escolha)
		{
			case 1:
			printf("Voc� escolheu consultar mais nomes!\n\n");
			system("pause");
			system("cls");
			break;
			
			default:
			printf("Voc� escolheu voltar para o Menu Principal!\n\n");
			system("pause");
			system("cls");
			return 0;
			break;
		}
	}
}
int deletar()
{
	int laco =1;
	
	for(laco=1;laco=1;)
	{
	
	char cpf[40];
	
	printf("Digite o CPF que ser� deletado: ");
	scanf("%s",cpf);
	
	remove (cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
		if(file == NULL)
		{	
		printf("O registro do usu�rio foi deletado com sucesso!\n");
		system("pause");
		}
	system("cls");
	
		int escolha;
		
		printf("###Voc� deseja deletar mais nomes?###\n\ndigite 1 - para sim\n\ndigite 2 - para n�o\n\n:");
		scanf("%d", &escolha);
		
		switch(escolha)
		{
			case 1:
			printf("Voc� escolheu deletar mais nomes!\n\n");
			system("pause");
			system("cls");
			break;
			
			default:
			printf("Voc� escolheu voltar para o Menu Principal!\n\n");
			system("pause");
			system("cls");
			return 0;
			break;
		}
	}
}
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int opcao=0; //Definindo vare�veis
	int laco=1;
	int comparacao;
	char senhadigitada[10]="a";
	
	printf("### Cart�rio da Ebac ###\n\n");
	printf("Login de administrador!\n\nDigite a sua senha:");
	scanf("%s",senhadigitada);
	comparacao = strcmp(senhadigitada, "admin");
	
	if(comparacao == 0)
	{
    	for(laco=1;laco=1;)
		{
			system("cls");
	
			setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem

			printf("### Cart�rio da Ebac ###\n\n"); //In�cio do menu
			printf("Escolha uma op��o desejada do menu:\n\n");
			printf("\t1 - Criar registros\n");
			printf("\t2 - Consultar registros\n");
			printf("\t3 - Deletar registros\n");
			printf("\t4 - sair\n\n");
	
			printf("Op��o: "); //Fim do menu

			scanf("%d", &opcao); //Armazenando a escolha do usu�rio

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
			
				case 4:
				printf("Obrigado por utilizar o sistema!\n\n");
				return 0;
				break;
			
				default:
				printf("Est� op��o n�o � v�lida!\n\n");
				system("pause");
				break;
			}
    	}	
	}
	else
	{
		printf("Senha incorreta!\n\n");
		system("pause");
		system("cls");
		main();
	}
		
}



