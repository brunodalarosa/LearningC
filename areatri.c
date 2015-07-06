/*Algoritmo que calcula a área de um triangulo checando a condição l1+l2>l3 */
#include <stdio.h>
#include <math.h>
main()
{
	float a,b,c,semiP,area;
	printf("Digite o valor do comprimento dos 3 lados do triangulo:\n");
	scanf("%f %f %f",&a,&b,&c);
	if (a+b<c || a+c<b || b+c<a)
	{
		printf("Dados invalidos! Estes não podem ser os lados de um mesmo triangulo!\n");
	} else{
		semiP=(a+b+c)/2;
		area=sqrt(semiP*(semiP-a)*(semiP-b)*(semiP-c));
		printf("A area do triangulo é %.2f\n",area);
	};
}