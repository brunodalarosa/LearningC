#include <stdio.h>

int preenchevet(int *v,int t){
	int i = 0;
	for (i; i <= t; i++)
	{
		scanf("%i",&v[i]);
	}
	return 0;
}

int maiorelemento(int *v, int t,int *maior){
	if (v[t] > *maior){
		*maior = v[t];
	}
	if (t == 0){
		return 0;
	}
	return maiorelemento(v,t-1,maior); 
}