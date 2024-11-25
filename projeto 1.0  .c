#include <stdio.h> \\biblioteca de texto
#include <stdlib.h> \\biblioteca de alocação de espaço e memoria
#include <locale.h> \\biblioteca de alocação de texto por região
#include <string.h> \\biblioteca responsavelpor cuidar das string

int inclusao()

{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char posto[40];
	
	system("cls");
	printf("Digite o CPF a ser incluso: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); //responsalvel por copiar os valores das string
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w");
	fprintf(file,cpf); //salvo o valor da variavel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file, nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o seu posto: ");
	scanf("%s", posto);
	
	file = fopen(arquivo, "a");
	fprintf(file, posto);
	fclose(file);
	
	system("pause");
	
}

int consulta()
{
	setlocale (LC_ALL, "Portuguese"); //definindo a linguagem
	char cpf[40];
	char conteudo[200];
	
	system("cls");
	printf("Digite o cpf a ser consultado: ");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
	    printf("Usuário inexistente \n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas são as informações do usuário: ");
		printf("%s", conteudo);
		printf("\n\n");
		
	}
	
	system("pause");
}

int exclusao()
{
	system("cls");
	printf("Digite o nome do usário desejado: \n");
	system("pause ");
}

int main()
    
	{
	int opcao=0; //definindo variaveis 
	int x=1;
	
	for(x=1;x=1;)
	{
	  system("cls");
	  
	  setlocale (LC_ALL, "Portuguese"); //definindo a linguagem
	
	  printf("Sejam bem vindos ao Cartótio da EBAC \n\n"); //inicio do menu
	  printf("Selecione a opção desejada: \n\n");
	  printf("\t1- Incluir Usuário \n");
	  printf("\t2- Consultar Usuário \n");
	  printf("\t3- Excluir Usuário \n"); 
	  printf("\t4- Sair do sistema \n\n");
	  printf("Digite a opção desejada: \n"); //fim do menu
	
	  scanf("%d", &opcao); //armazenando a escolha do usuário
	  
	   switch(opcao)
     {
     	system("cls");
     	
	  	case 1:
	  	inclusao();
		break;
		
		case 2:
		consulta();
		break;
		
		case 3:
		exclusao();
		break;
		
		case 4:
		printf("Obrigado por utilizar nosso sistema!\n");
		return 0;
		break;	
		
		
		default:
		printf("Digite uma opção valida\n"); //fim da seleção
		system("pause");
		break;
			
			
 	  }
    } 
}
