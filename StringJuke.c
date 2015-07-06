#include <stdio.h>
#include <string.h>

char musicas[][80] = {
		"melancia amarela",
		"caju rosa",
		"nega loira",
		"chocolate cake",
		"girassol dourado"
	};

int acha_musica(char busca[]){
	int i;
	for (i = 0; i < 5; i++){
		if (strstr(musicas[i],busca)){
			printf("Faixa %i: %s\n",i,musicas[i]);
			return 1;
		} 
	}
	puts ("Musica não encontrada, digite novamente.");
	return 0;
}

int main (){
	int r = 0;
	char musica[80];
	do{
		puts ("Escreva o nome da musica:");
		fgets(musica,79,stdin);
		r = acha_musica(musica);
	} while (r == 0);
	return 0;
}