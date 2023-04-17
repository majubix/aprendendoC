#include <stdio.h>

int main (){
	float n1, n2, media;
	printf("Digite sua primeira nota: ");
	scanf("%f", &n1);
	
	printf("Digite sua segunda nota: ");
	scanf("%f", &n2);
	
	
	
	if (n1 < 0.0  || n1 > 10.0 || n2 < 0.0 || n2 > 10.0){
		printf("Você digitou uma nota inválida, Insira um numero entre 0.0 e 10.0");
	} else {
		media  = (n1 + n2) /2 ;
		printf("%f", media);
	}
	
	
	
	return 0;
}

