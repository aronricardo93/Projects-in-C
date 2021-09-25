#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main ()

{
	float num, raiz, quad;

	
	printf("Digite um numero: ");
	scanf("%f", &num);
	raiz = sqrt(num);
	quad = pow(num,2);
	
	printf("Raiz = %.1f", raiz);
	printf("\nQuadrado = %.1f\n", quad);

    system("pause");
	return(0);		

}
