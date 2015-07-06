/*Algoritmo que inventar um numero inteiro de 3 algarismos. Não usa tratamento de posição.
Não é o melhor método.*/
#include <stdio.h>
main()
{
	int num,u,d,c=0;
	printf("digite um numero de 3 digitos\n");
	scanf("%i",&num);
	c=num/100;
	num=num-((num/100)*100);
	d=num/10;
	num=num-((num/10)*10);
	u=num;
	num=0;
	num=c+(d*10)+(u*100);
	printf("Numero invertido:%i\n",num);
}