#include <stdio.h>
#include "vetores.c"

int main(){
	int t=0;
	puts("Primeiro vamos criar um vetor. Qual será o seu tamanho?");
	scanf("%i",&t);
	t--;
	int v[t];
	puts("Agora vamos preenche-lo!");
	preenchevet(v,t);
	int maior=v[0];
	maiorelemento(v,t,&maior);
	printf("%i é o maior elemento do vetor!\n",maior);
	return 0;

}