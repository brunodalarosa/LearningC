#include <stdio.h>
#include <string.h>

int main(){
	char nome[80];
	puts ("Digite seu nome:");
	fgets (nome,60,stdin);
	strcat(nome," viado");
	printf("Seu nome real é: %s\n",nome);
	return 0;
}