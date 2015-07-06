/*Programa que determina o número de múltiplos de um inteiro k situados entre dois inteiros x e y*/
/*Feito por mim*/
#include <stdio.h>
main()
{
	int NumMenor,NumMaior,Divisor,MenMultiplo,MaiorMultiplo,Qtd;
	printf("Digite o numero que você deseja saber a quantidade de multiplos\n");
	scanf("%i",&Divisor);
	printf("Digite os numeros X e Y tal que os multiplos estejam entre X e Y (Y>X)");
	scanf("%i%i",&NumMenor,&NumMaior);
	NumMaior=NumMaior--;
	MenMultiplo=NumMenor - NumMenor%Divisor + Divisor; /* 36 */
	MaiorMultiplo=(NumMaior - NumMaior%Divisor + Divisor)-Divisor; /* 297 */
	Qtd=((MaiorMultiplo-MenMultiplo)/Divisor); /*261/9= 29 */
	printf("A quantidade de multiplos de %i entre %i e %i é: %i\n",Divisor,NumMenor,NumMaior,Qtd);
}