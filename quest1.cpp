#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main () 
{
	
	int num;
	int total3;
	int div3;
	int media3;
	
	do
	{
		printf("Digite um numero \n");
		scanf("%i", &num);
		
		if(num%3==0) {
			total3++;
			div3 += num;
			
		} 
		
		if (total3 >= 10) {
			media3 = div3 / total3;
			printf("Media dos numeros divisiveis por 3: %i \n", media3);
		}

	} while(num > 0);
	
	
}
