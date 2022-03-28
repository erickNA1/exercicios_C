#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main () 
{
	
	int ped = 1;
	int prec;
	int quant;
	int total;
	
	do
	{
		printf("Digite o numero do pedido \n");
		scanf("%i", &ped);
		
		if(ped != 0) {
			
			printf("Digite o valor do pedido \n");
			scanf("%i", &prec);
		
			printf("Digite a quantidade de itens \n");
			scanf("%i", &quant);
		
			total += prec * quant;
			
		}
		
		

	} while(ped != 0);
	
	printf("Valor total de pedidos do dia: %i", total);
	
	
}
