/* Algoritmo para dizer o valor de uma carta no BlackJack*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char card_name[3];	
	int val, cont = 0;
	while (card_name[0]!='X') {
		puts("Enter the card_name:");
	    scanf("%2s", card_name);
		/* Feito com SWITCH */
		switch(card_name[0]) {
			case 'K':
			case 'Q':	
			case 'J':
				val = 10;
				break;
			case 'A':
				val = 11;
				break;
			case 'X':
				continue;
			default:
				val=atoi(card_name);
				if (val <=0 || val >=11){
					printf("ERRO! Valor invalido!\n");
					continue;
				}
		}
		/*Checa se o valor está entre 3 e 6*/
		if (val >= 3 && val <= 6) {
			printf("The sum goes up!\n");
			cont++;	
		/*Checa se o valor está entre 10, J, Q ou K*/	
		} else if (val==10) {
			printf("The sum goes down!\n");
			cont--;
		}
		printf("Contador:%i\n",cont);
	}
	printf("Contagem final:%i\n",cont);
	return 0;
}

	/* Feito com IF */	
	/*if (card_name[0] == 'K') {
		val = 10;
	} else if (card_name[0] == 'Q') {
		val = 10;
	} else if (card_name[0] == 'J') {
		val = 10;
	} else if (card_name[0] == 'A') {
		val = 11;
	} else {
		val = atoi(card_name);
	}*/