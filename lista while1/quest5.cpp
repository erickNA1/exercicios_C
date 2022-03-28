#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main () 
{
	
	int conta;
	int saldo;
	
	do
	{
		printf("Digite o numero da sua conta \n");
		scanf("%i", &conta);
		printf("Digite seu saldo \n");
		scanf("%i", &saldo);
		
		if(saldo < 0) {
			printf("Saldo Negativo \n");
		} else {
			printf("Saldo Positivo \n");
		}

	} while(saldo > 0);
	
	
}