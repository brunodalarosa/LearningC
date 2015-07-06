#include <stdio.h>

int main(){
	int n;
	int x1,x2,i,aux;
	x1 = x2 = aux = 1;
	puts("Digite o N-ésimo termo da sequencia Fibbonaci que você deseja chegar");
	scanf("%i",&n);
	if (n == 1){
		puts ("Fibbonaci:\n1");
		return 0;
	}
	puts ("Fibbonaci:\n1");
	for (i = 1; i < n; i++)
	{
		x2 = aux;
		printf("%i\n",x2);
		aux = x1 + x2;
		x1 = x2;
	}
	return 0;
}