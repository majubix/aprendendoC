#include <stdio.h>

int main() { 
	int a, raiz;
	printf("Digite um numero: ");
	scanf("%d", &a);
	
	raiz = a ^ a;
	
	if (a > 0)
	{
	printf("O n�mero digitado foi %d \n Sua raiz quadrada � %d", a, raiz);
	}else
	{
	printf("Voc� digitou um numero negativo, por tanto � invalido.");
	}
	

	return 0;
}
