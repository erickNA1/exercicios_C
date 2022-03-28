#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main () 
{
	
	int num;
	int cont;
	
	do
	{
		
		printf("digite um numer par \n");
		scanf("%i", &num);
		
		if(num%2==0) {
			cont++;
		}
		
	} while (num%2==0);
	
	printf("Numeros inseridos: %i", cont);
}