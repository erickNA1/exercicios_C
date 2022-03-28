#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main () 
{
	
	float ger = 1.50;
	float cresGer = 0.02;
	float paf = 1.10;
	float cresPaf = 0.03;
	int anos = 0;
	
	while(ger > paf) {
		ger += cresGer;
		paf += cresPaf;
		anos++;
		
		printf("%i anos se passaram, Gertrudes mede %.2fm e Pafonso mede %.2fm \n", anos, ger, paf);
	}
	
	printf("Demoraram %i anos para que Pafonso ficasse maior que Gertrudes \n", anos);
	
	
}
