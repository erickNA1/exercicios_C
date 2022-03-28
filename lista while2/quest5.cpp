#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main () 
{
	
	int num;
	int maior;
	int menor;
	int contador = 0;
	int continuar = 1;
	
	do
	{
		printf("Digite um numero \n");
		scanf("%i", &num);
		
		if(contador = 0) {
			
			maior = num;
			menor = num;
			contador++;
			
		} else if(contador >= 1) {
			if(num > maior) {
				maior = num;
			} else if(num < menor){
				menor = num;
			}
		}
		
		printf("Deseja continuar executando? 1: sim 2: nao \n");
		scanf("%i", &continuar);

	} while(continuar != 2);
	
	printf("Menor numero: %i Maior numero: %i", menor, maior);
	
	
}
