#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main () 
{
	
	int idade = 0;
	int jovem = 0;
	int adulto = 0;
	int idoso = 0;
	
	
	do
	{
		printf("Digite sua idade \n");
		scanf("%i", &idade);
		
		if(idade <= 18) {
			jovem++;
		} else if(idade >= 18 && idade <= 59) {
			adulto++;
		} else if(idade >= 59) {
			idoso++;
		}
		
		printf("Jovens: %i; Adultos: %i; Idosos: %i \n", jovem, adulto, idoso);
		
	} while(idade <= 110);

}