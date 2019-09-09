#include <stdio.h>
#include <stdlib.h>

int main(void){
	int numero;
	printf("Insira um numero: ");
	scanf("%d", &numero);
	if(numero<200 && numero>100){
		printf("Voce inseriu um numero entre 100 e 200");
	}
	else{
		printf("Voce inseriu um numero fora da faixa");
	}
}
