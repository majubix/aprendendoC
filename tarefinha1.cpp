#include <stdio.h>
//estruturas de decis�o
int main(){
	int idade;
	printf("Qual � a sua idade? ");
	scanf("%d", &idade);
	
	
	if (idade < 18){
		printf("Voc� � menor de idade.");
	} else if (idade >= 18 && idade < 60){
		printf("voc� � adulto");
	}else{
		printf("Voc� � idoso");
	}
	
	printf(" Sua idade � %d", idade);

	
	
	return 0;
}
