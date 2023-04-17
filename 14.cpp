#include <stdio.h>

int main() { 
	int a, raiz;
	printf("Digite um numero: ");
	scanf("%d", &a);
	
	raiz = a ^ a;
	
	if (a > 0)
	{
	printf("O número digitado foi %d \n Sua raiz quadrada é %d", a, raiz);
	}else
	{
	printf("Você digitou um numero negativo, por tanto é invalido.");
	}
	

	return 0;
}
