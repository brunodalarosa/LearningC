#include <stdio.h>

int fatimpar(int n, int* r){
	if (n == 1){
		return 1;
	}
	if (n%2 == 0){
		puts ("entrou par");
		fatimpar(n-1,*r);
	} else {
		puts ("entro impar");
		 return (*r * (fatimpar(n-1,*r)));
	}
}

int main(){
	int n;
	int r=1;
	puts ("Fatorial impar, digite um numero impar:");
	scanf("%i",&n);
	while (n%2==0){
		puts ("Numero par! Insira numero impar:");
		scanf("%i",&n);
	}
	if (n == 1){
		printf("Fatorial ímpar de %i = %i\n",n,1);
		return 0;
	}
	fatimpar(n,&r);
	printf("Fatorial ímpar de %i = %i\n",n,r);
	return 0;
}