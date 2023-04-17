#include <stdio.h>

int main (){
	
	int a, raiz;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &a);
	
	raiz = a * a;
	
	if (a >= 0 )
	{
		printf("%d",raiz);
	}else
	{
		printf("Numero invalido");
	}
	
	
	
	return 0;
}
