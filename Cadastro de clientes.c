#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct cliente{
	int id;
	char nome[50];
	int idade;
	char civil[10];	
	char cpf[15];
};

int i = 1,cad = 0;	
struct cliente ficha[100];
char busca[30];

int main(){
	char retorne;
	int op, acha=0;
	
	system("cls");
	setlocale(LC_ALL,"");	
	printf("-== Cadastro de clientes ==-");
	printf("\n\nDigite uma opção:\n");
	printf("[1] Cadastrar\n[2] Buscar\n[3] Exibir\n[4] SAIR\n");
	scanf("%d",&op);
	fflush(stdin);
	
	switch(op){
		case 1:
			ficha[i].id = i;
			system("cls");
			printf(" _____________________\n");
			printf("|Id: %d\n",ficha[i].id);
			printf("|Nome: ");
			gets(ficha[i].nome);
			fflush(stdin);
			printf("|Idade: ");
			scanf("%d",&ficha[i].idade);
			fflush(stdin);
			printf("|Estado Civil: ");
			gets(ficha[i].civil);
			fflush(stdin);
			printf("|CPF: ");
			gets(ficha[i].cpf);
			fflush(stdin);
			printf(" ----------------------\n\n");
			i++;
			cad++;
			system("pause");
			main();
			break;
		case 2:
			system("cls");
			printf("Insira o nome do clinte: ");
			gets(busca);
			for(i=1;i<=cad;i++){
				if(strcmp(busca,ficha[i].nome)==0){
					printf("Id: %d\nNome: %s\nIdade: %d\nEstado Civil: %s\nCPF: %s\n\n",ficha[i].id,ficha[i].nome,ficha[i].idade,ficha[i].civil,ficha[i].cpf);
					acha++;
				}
			}
			if(acha == 0){
				printf("Não Cadastrado(a)!");
			}
			break;
		case 3:
			system("cls");
			for (i=1;i<=cad;i++){
				printf("Id: %d\nNome: %s\nIdade: %d\nEstado Civil: %s\nCPF: %s\n\n",ficha[i].id,ficha[i].nome,ficha[i].idade,ficha[i].civil,ficha[i].cpf);
			}
			printf("Deseja retornar ao Menu Principal? (S/N)\n");
			scanf("%c",&retorne);
			if((retorne=='s') || (retorne=='S')){
				main();
			}
			break;
		case 4:
			system("cls");
			printf("Saindo...\n\n");
			system("pause");
			break;
		default:
			main();
			break;
	}
	return (0);
}
