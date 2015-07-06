#include <stdio.h>
#include "criptografa.c"

int main(){
	char mensagem[80];
	while (fgets(mensagem,79,stdin)){
		criptografar(mensagem);
		printf("%s\n",mensagem);
	}
	return 0;
}