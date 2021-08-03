#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
	
	int cart[10],qtd,i,j,k,l;
	
	system("color B");
	setlocale(LC_ALL,"Portuguese");
	printf("\t++++=== B I N G O ===++++\n\n");
	printf("Digite a quantidade de cartelas a serem geradas: ");
	scanf("%d",&qtd);
	
	srand(time(NULL));
	for(i=1;i<=qtd;i++){
		printf("\n\nCartela Nº %d:\n",i);
		for(j=0;j<10;j++){
			cart[j] = rand()%99;
		
		}
		for(k=0;k<10;k++){
			for(l=0;l<10;l++){
				if(k==l){
					cart[k]=cart[k];
				}else{
					if(cart[k]==cart[l]){
						cart[k]=rand()%99;
					}
				}
			}
		}
		for(j=0;j<10;j++){
			printf(" %d ",cart[j]);
		}
		printf("\n");
	}
	system("pause");
	return(0);
}
