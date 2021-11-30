#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
	char nome[30];
	int idade;
	char cpf[11];
	char endereco[40];
}cadastroCliente;

void menu(){
	printf("----===== L O C A D O R A     DE    V E Í C U L O S =====----\n\n");
	printf("Digite a opção:\n\n[1] - Cadastrar cliente\n[2] - Buscar cliente\n[3] - Listar Clientes\n[4] - Alugar veículo\n[5] - Veículos alugados\n");
}

int main(){
	cadastroCliente cadastro[100];
	int op,contador = 0,i;
	char cadastrar,buscar[40];
	
	setlocale(LC_ALL,"");
	do{
		menu();
		scanf("%d",&op);
		fflush(stdin);
		if(((op!=1)&&(op!=2)&&(op!=3)&&(op!=4))){
			printf("Opção Inválida! Digite uma opção válida\n\n");
			system("pause");
			system("cls");
		}
		switch(op){
			case 1:
				do{
					printf("\n\nNome: ");
					gets(cadastro[contador].nome);
					fflush(stdin);
					printf("Idade: ");
					scanf("%d",&cadastro[contador].idade);
					fflush(stdin);
					printf("CPF: ");
					gets(cadastro[contador].cpf);
					fflush(stdin);
					printf("Endereço: ");
					gets(cadastro[contador].endereco);
					fflush(stdin);
					system("cls");
					do{
						printf("Deseja cadastrar outro cliente? [S]/[N]");
						scanf("%c",&cadastrar);
						fflush(stdin);
						if((cadastrar != 'S') && (cadastrar != 's') && (cadastrar != 'N') && (cadastrar != 'n')){
							system("cls");
							printf("--= OPÇÃO INVÁLIDA =--\n");
							system("pause");
							system("cls");
						}
					}while((cadastrar != 'S')&&(cadastrar != 'N')&&(cadastrar != 's')&&(cadastrar != 'n'));
					
					if((cadastrar == 'S') || (cadastrar == 's')){
						contador++;
						system("cls");
					}else{
						system("cls");
					}
					
				}while((cadastrar == 'S') || (cadastrar == 's'));
				break;
			case 2:
				system("cls");
				printf("Digite o nome do cliente que deseja buscar: ");
				gets(buscar);
				fflush(stdin);
				break;
			case 3:
				system("cls");
				for(i = 0; i <= contador; i++){
					printf("|%d| %s\n",(i+1),cadastro[i].nome);
				}
				system("\n\npause");
				break;
			case 4:
				break;
		}
	}while(op!=0);
	
	return 0;
}
