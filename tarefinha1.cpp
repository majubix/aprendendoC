#include <stdio.h>
//estruturas de decisão
int main(){
	int idade;
	printf("Qual é a sua idade? ");
	scanf("%d", &idade);
	
	
	if (idade < 18){
		printf("Você é menor de idade.");
	} else if (idade >= 18 && idade < 60){
		printf("você é adulto");
	}else{
		printf("Você é idoso");
	}
	
	printf(" Sua idade é %d", idade);

	
	
	return 0;
}
