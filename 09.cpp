#include <stdio.h>

int main(){
	
	int c, k;
	
	printf("Digite a temperatura em graus Kelvin: ");
	scanf("%d", &k);
	c = k - 273.15 ;
	printf("A temperatura em Celsius � %d e em Kelvin � %d", c, k);
	
	
	return 0;
}

