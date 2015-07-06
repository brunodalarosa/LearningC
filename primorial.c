#include <stdio.h>
#include "checaprimo.c"


int main(){
	int n,primorial,d;
	primorial = d = 1;
	puts("Primorial, insira um primo:");
	scanf("%i",&n);
	while (!checaprimo(n)){
		puts("Numero não é primo, insira um primo:");
		scanf("%i",&n);
	}
	while (d <= n){
		if (checaprimo(d)){
			primorial = primorial * d;
		}
		d++;
	}
	printf("O primorial de %i é %i\n",n,primorial);
}