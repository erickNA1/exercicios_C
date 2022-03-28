#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main() {
	
	int num;
	int div2 = 0;
	int div7 = 0;
	
	do
	{
		
		printf("digite um numero \n");
		scanf("%i", &num);
		
		if(num%2==0){
			div2++;
			printf("Numeros divisiveis por dois: %i \n", div2);
		} else if (num%7==0) {
			div7++;
			printf("Numeros divisiveis por sete: %i \n", div7);
		}
		
	} while (num > 0);
	
}