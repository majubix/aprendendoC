#include <stdio.h>

int main(){
	
	int a,b;
	printf("Digite um n�mero:");
	scanf("%d", &a);
	printf("Digite outro n�mero: ");
	scanf("%d", &b);
	
	if (a > b){
		printf("A � maior que B");
	} else if (b > a){
		printf("B � maior que A");
	}else{
		printf("Os numeros sao iguais");
	}
	

	
	return 0;
}
