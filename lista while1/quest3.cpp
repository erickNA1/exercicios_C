#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main () 
{
	
	int num, cont = 0;
	float raiz;
	
	printf("Digite 10 numeros positivos \n");
	
	do
	{
		
		scanf("%i", &num);
		
		if(num > 0) {
			
			cont++;
			raiz = sqrt(num);
			printf("raiz quadrada de %i = %f \n", num, raiz);
			
			
		} else if(cont >= 0 && num < 0) {
			
			cont = cont;
			printf("Numero invalido, digite novamente \n");
			
		}
		
	} while(cont < 10);
	
	printf("Numero de execucoes: %i", cont);
}