#include <stdio.h>

int main(){
	int a, b;
	printf("Digite um numero: ");
	scanf("%d", &a);
	
	printf("Digite outro numero: ");
	scanf("%d", &b);
	
	if (a > b){
		printf("a � maior que b");
	}
	else if (a < b){
		printf("b � maior que a");
	}
		else{
			printf("sao iguais");
		}
	return 0;
}
