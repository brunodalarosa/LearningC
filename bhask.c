#include <stdio.h>
#include <math.h>
main()
{
	float a,b,c,dt,x1,x2;
	printf("Insira os valores A B C da equação do segundo grau! (AX^2 + BX + C)\n");
	scanf("%f%f%f",&a,&b,&c);
	if (a!=0){
		dt=b*b-4*a*c;
		printf("Delta= %.1f\n",dt);
		if(dt>0){
			x1=(-b+sqrt(dt))/(2*a);
			x2=(-b-sqrt(dt))/(2*a);
			printf("As raizes da equação %.1fX^2+%.1fX+%.1f são:\n X1= %.1f e X2= %.1f\n",a,b,c,x1,x2);
		}
		if(dt==0){
			x1=(-b+sqrt(dt))/(2*a);
			printf("A raiz da equação %.1fX^2+%.1fX+%.1f é:\n X1= %.1f",a,b,c,x1);
		}
		if (dt<0){
			printf("Delta negativo, as raizes da equação não são reais!\n");
		}
	} else{
		printf("* ERRO *\nNão é equação do segundo grau!\n");
	}

}