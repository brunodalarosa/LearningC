#include <stdio.h>

int main(){
	 char cor[80];

	while (scanf("%79[^\n]",cor)){ // lê a cor
		if (cor == "vermelho"){
			printf("Maçã\n");
		}
			if (cor == "amarelo"){
				printf("Abacaxi\n");
		}
			if (cor == "laranja"){
				printf("Tangerina\n");
		}
			if (cor == "roxo"){
				printf("Uva\n");
		} else{
			fprintf(stderr, "Cor não reconhecida:%s\n",cor); //escreve no arquivo
			return 2;
		}
	}
	return 0;
}
