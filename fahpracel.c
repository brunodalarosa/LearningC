/*Algoritmo que converte uma temperatura em fahrenheit para Celsius*/
#include <stdio.h>
main()
{
	float f,c;
	printf("Insira o valor da temperatura em graus fahrenheit\n");
	scanf("%f",&f);
	c=((f-32)/9)*5;
	printf("%.2f graus fahrenheit equivalem a %.2f graus celsius\n",f,c);
}