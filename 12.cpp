#include <stdio.h>

int main(){
	
	int a,b;
	printf("Digite um número:");
	scanf("%d", &a);
	printf("Digite outro número: ");
	scanf("%d", &b);
	
	if (a > b){
		printf("A é maior que B");
	} else if (b > a){
		printf("B é maior que A");
	}else{
		printf("Os numeros sao iguais");
	}
	

	
	return 0;
}
