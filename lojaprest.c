#include <stdio.h>
main()
{
	float valor, en, cent=0;
	int prest; 
	printf("Informe o valor do produto!\n");
	scanf("%f",&valor);
	prest=valor/3;
	cent=valor-prest*3;
	en=prest+cent;
	printf("A entrada será de %.2f e as outras duas prestações serão de %i\n",en,prest);
}