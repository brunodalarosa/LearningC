/*Algoritmo que printa a quantidade de multiplos de N entre X e Y usando laço de repetição*/
#include <stdio.h>
main()
{
	int x,y,k,Qtd,Men,Maior=0;
	printf("Digite os numeros X e Y tal que os multiplos estejam entre X e Y (Y>X)\n");
	scanf("%i%i", &x, &y);
	printf("Digite o numero divisor\n");
	scanf("%i",&k);
	Men=x - x%k + k;
	Maior=y-y%k;
	printf("O menor multiplo é %i e o maior é %i\n",Men, Maior);
	for (Men; Men<Maior; Men=Men+k)
	{
		Qtd=Qtd+1;
	}
	printf("Existem %i multiplos de %i entre %i e %i\n",Qtd,k,x,y);
}