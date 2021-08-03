/*	Discente: Aron Ricardo Santana Ribeiro
	Graduação: Engenharia de Software - UniCesumar
	Disciplina: Algoritmos e Lógica de programação II
	Docente: Pietro Maritns
	RA: 21089223-5 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main (){
	
	FILE *arq;
	int sintoma,idade,pontos=0;
	char RespQ, sexo, nome[40],cpf[15];
	
	setlocale(LC_ALL,"Portuguese");
	printf("******************************************************************\n");
	printf("*                                                                *\n");
	printf("*H O S P I T A L - A T E N D I M E N T O 24H - COMBATE AO COVID19*\n");
	printf("*                                                                *\n");
	printf("*                                                                *\n");
	printf("******************************************************************\n");
	printf(".\n");
	printf(".\n");	
	printf(".\n");
	printf("\t\t\t ------------------\n");
	printf("\t\t\t|TOTEM - ELETRÔNICO|\n");
	printf("\t\t\t ------------------\n\n");
	printf("\n\nVocê está com sintomas da COVID19?\n[1]SIM\n[2]NÃO\n");
	scanf("%d",&sintoma);
	system("cls");
	
	while((sintoma!=1) && (sintoma!=2)){
		printf("Opção Inválida!");
		printf("\n\nVocê está com sintomas da COVID19?\n[1]SIM\n[2]NÃO\n");
		scanf("%d",&sintoma);
		system("cls");
	}

	printf("\nO USO DE MÁSCARA É OBRIGATÓRIO!\n\n");		
	
	if (sintoma ==1){
		printf("\n\n\nDigite o seu CPF(xxx.xxx.xxx-xx): ");
		fflush(stdin);
		gets(cpf);
		printf("\nDigite seu NOME: ");
		fflush(stdin);
		gets(nome);
		printf("\nSeu sexo é: \n[M]Masculino\n[F]Feminino\n");
		scanf("%c",&sexo);
		printf("\nDigite a sua idade: ");		
		scanf("%d",&idade);
		system("cls");
		printf("++++++++++++++++++++++++++++\n");
		printf("+ QUESTIONÁRIO DE SINTOMAS +\n");
		printf("++++++++++++++++++++++++++++\n\n");
		printf("|Responda: [S]Sim ou [N]Não|\n");
		printf("Tem febre? ");
		fflush(stdin);
		scanf("%c",&RespQ);
		if ((RespQ=='S') || (RespQ=='s')){
			pontos = pontos+5;
		}
		printf("\nTem dor de cabeça? ");
		fflush(stdin);
		scanf("%c",&RespQ);
		if ((RespQ=='S') || (RespQ=='s')){
			pontos = pontos+1;
		}
		printf("\nTem secreção nasal ou espirros? ");
		fflush(stdin);
		scanf("%c",&RespQ);
		if ((RespQ=='S') || (RespQ=='s')){
			pontos = pontos+1;
		}
		printf("\nTem dor/irritação na garganta? ");
		fflush(stdin);
		scanf("%c",&RespQ);
		if ((RespQ=='S') || (RespQ=='s')){
			pontos = pontos+1;
		}
		printf("\nTem tosse seca? ");
		fflush(stdin);
		scanf("%c",&RespQ);
		if ((RespQ=='S') || (RespQ=='s')){
			pontos = pontos+3;
		}
		printf("\nTem dificuldade respiratória? ");
		fflush(stdin);
		scanf("%c",&RespQ);
		if ((RespQ=='S') || (RespQ=='s')){
			pontos = pontos+10;
		}
		printf("\nTem dores no corpo? ");
		fflush(stdin);
		scanf("%c",&RespQ);
		if ((RespQ=='S') || (RespQ=='s')){
			pontos = pontos+1;
		}
		printf("\nTem diarréia? ");
		fflush(stdin);
		scanf("%c",&RespQ);
		if ((RespQ=='S') || (RespQ=='s')){
			pontos = pontos+1;
		}
		printf("\nEsteve em contato, nos últimos 14 dias, com um caso diagnosticado com COVID-19? ");
		fflush(stdin);
		scanf("%c",&RespQ);
		if ((RespQ=='S') || (RespQ=='s')){
			pontos = pontos+10;
		}
		printf("\nEsteve em locais com grande aglomeração? ");
		fflush(stdin);
		scanf("%c",&RespQ);
		if ((RespQ=='S') || (RespQ=='s')){
			pontos = pontos+3;
		}
		system("cls");
	    arq=fopen("Dados do Paciente.txt","w+");
		if (pontos<=9){
			printf(".........................................................");
			printf("\n|                        DADOS                          |\n");
			printf(".........................................................\n");
			printf("|NOME: %s\n|SEXO: %c\n|IDADE: %d anos\n|CPF: %s\n|Somou %d pontos e deverá ficar na ALA de RISCO BAIXO\n",nome,sexo,idade,cpf,pontos);
			printf(" --------------------------------------------------------\n\n");
			fprintf(arq,"|NOME: %s\n|SEXO: %c\n|IDADE: %d anos\n|CPF: %s\n|Somou %d pontos e deverá ficar na ALA de RISCO BAIXO\n",nome,sexo,idade,cpf,pontos);
		}
	 if ((pontos>=10) && (pontos<=19)){
			printf(".........................................................");
			printf("\n|            		       DADOS                          |\n");
			printf(".........................................................\n");
			printf("|NOME: %s\n|SEXO: %c\n|IDADE: %d anos\n|CPF: %s\n|Somou %d pontos e deverá ficar na ALA de RISCO MÉDIO\n",nome,sexo,idade,cpf,pontos);
			printf(" --------------------------------------------------------\n\n");
			fprintf(arq,"|NOME: %s\n|SEXO: %c\n|IDADE: %d anos\n|CPF: %s\n|Somou %d pontos e deverá ficar na ALA de RISCO MÉDIO\n",nome,sexo,idade,cpf,pontos);
		}
	 if (pontos>20){
			printf(".........................................................");
			printf("\n|                        DADOS                          |\n");
			printf(".........................................................\n");
			printf("|NOME: %s\n|SEXO: %c\n|IDADE: %d anos\n|CPF: %s\n|Somou %d pontos e deverá ficar na ALA de RISCO ALTO\n",nome,sexo,idade,cpf,pontos);
			printf(" --------------------------------------------------------\n\n");
			fprintf(arq,"|NOME: %s\n|SEXO: %c\n|IDADE: %d anos\n|CPF: %s\n|Somou %d pontos e deverá ficar na ALA de RISCO ALTO\n\n",nome,sexo,idade,cpf,pontos);
		}
	}else{
		if (sintoma == 2){
			printf("Por favor, dirija-se à fila dos não suspeitos a contração do COVID-19. Lembre-se de manter um distanciamento mínimo de 2 metros. Previna-se! Use o álcool em gel.\n\n");
    	}
	}
		if (arq==NULL){
			printf("O arquivo não foi criado.Ocorreu um erro!");
		}else{
			printf("Os dados foram armazenados no arquivo: Dados do Paciente.txt\n\n");
		}
	fclose(arq);
	system("pause");
	return(0);
}
