#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int menu(){
	
	int opcao;
	
	printf("---==Olá, eleitor/eleitora!=---\n");
	printf(" ________________________\n");
	printf("|Digite a opção desejada:|\n");
	printf(" ------------------------\n");
	printf("\n|[1] Votar\n|[2] Apuração dos votos\n|[3] Sair\n");
	scanf("%d",&opcao);
	while ((opcao!=1) && (opcao!=2) && (opcao!=3)){
		system("cls");
		printf("OPÇÃO INVÁLIDA!\n Por favor, Digite uma opção válida a seguir:");
		printf("\n|[1] Votar\n|[2] Apuração dos votos\n|[3] Sair\n");
		scanf("%d",&opcao);		
	}
	return(opcao);
}

int main (){
		
	int op,voto_vereador=0,voto_prefeito=0,voto_computado=0,joao=0,maria=0,ze=0,nulo=0,zureta=0,gomes=0,nulo2=0;
	
	setlocale(LC_ALL,"Portuguese");
	do{
		op = menu();
		switch(op){
			case 1:
				do{
					system("cls");
					printf("\n ____________________________________________");
					printf("\n|Digite o número do seu candidato a VEREADOR:|");
					printf("\n --------------------------------------------");
					printf("\n[111] - João do Frete\n[222] - Maria da Pamonha\n[333] - Ze da Farmacia\n[444] - NULO\n");
					scanf("%d",&voto_vereador);
					switch(voto_vereador){
						case 111:
							joao++;
							break;
						case 222:
							maria++;
							break;
						case 333:
							ze++;
							break;
						case 444:
							nulo++;
							break;
					}
					if((voto_vereador!=111) && (voto_vereador!=222) && (voto_vereador!=333) && (voto_vereador!=444)){
						printf("\nOPÇÃO INVÁLIDA\n");
						system("pause");
					}else{
						printf("\7"); //beep de confirmação
						printf("VOTO COMPUTADO COM SUCESSO!\n");
						voto_computado = voto_computado + 1;
						system("pause");
					}
				}while((voto_vereador!=111) && (voto_vereador!=222) && (voto_vereador!=333) &&(voto_vereador!=444));
				
				do{
					system("cls");
					printf("\n ____________________________________________");
					printf("\n|Digite o número do seu candidato a PREFEITO:|");
					printf("\n --------------------------------------------");
					printf("\n[11] - DR. Zureta\n[22] - Senhor Gomes\n[44] - NULO\n");
					scanf("%d",&voto_prefeito);
					switch(voto_prefeito){
						case 11:
							zureta++;
							break;
						case 22:
							gomes++;
							break;
						case 44:
							nulo2++;
							break;
					}
					if((voto_prefeito!=11) && (voto_prefeito!=22) &&(voto_prefeito!=44)){
						printf("\nOPÇÃO INVÁLIDA\n");
						system("pause");
					}else{
						printf("\a"); //beep de confirmação
						printf("\nVOTO COMPUTADO COM SUCESSO!\n");
						voto_computado = voto_computado + 1;
						system("pause");
					}
				}while((voto_prefeito!=11) && (voto_prefeito!=22) && (voto_prefeito!=44));
				system("cls");
				break;
			case 2:
				system("cls");
				printf("__________________________");
				printf("\n|TOTAL DE VOTOS VÁLIDOS: %d|\n",voto_computado);
				printf("---------------------------\n\n");
				printf("___________________________________________");
				printf("\n|Número de votos dos candidatos a VEREADOR|");
				printf("\n -----------------------------------------");
				printf("\nJoão do Frete: %d votos\nMaria da pamonha: %d votos\nZe da Farmacia: %d votos\nNULO: %d\n\n", joao,maria,ze,nulo);
				printf("\n\n___________________________________________");
				printf("\n|Número de votos dos candidatos a PREFEITO|");
				printf("\n -----------------------------------------");
				printf("\nDr. Zureta: %d votos\nSenhor Gomes: %d votos\nNULO: %d\n\n",zureta,gomes,nulo2);
			
				system("pause");
				system("cls");
				break;
			case 3:
				printf("\nObrigado por exercer a sua cidadania!\nFinalizando...");
				break;
			}
		}while((op==1)||(op==2));
	return(0);
	}

