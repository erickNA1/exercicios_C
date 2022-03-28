#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main () 
{
	
	int idade = 0;
	int sexo;
	int masc;
	int fem;
	int totalFem;
	int idadeFem;
	int mediaFem;
	int totalMasc;
	
	do
	{
		printf("Digite seu sexo, 1-feminino 2-masculino \n");
		scanf("%i", &sexo);
		
		if(sexo = 1) {
			fem++;
		} else if(sexo = 2) {
			masc++;
		} else if(sexo >= 3 || sexo <= 0){
			printf("Sexo invalido, digite novamente \n");
			scanf("%i", &sexo);
		}
		
		printf("Digite sua idade \n");
		scanf("%i", &idade);
		
		if(sexo = 1 && idade >= 30 && idade <= 45) {
			totalFem++;
			idadeFem += idade;
		} else if(sexo = 2) {
			totalMasc++;
		}
		

	} while(idade > 0);
	
	mediaFem = idadeFem / totalFem;	
	
	printf("Media de mulheres entre 30 e 45 anos: %i \n", mediaFem);
	printf("Total de pessoas do sexo masculino: %i \n", totalMasc);
	
	
}
