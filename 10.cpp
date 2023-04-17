#include <stdio.h>

int main(){
	
	float k,c;
	printf("Digite a temperatura em graus Celsius: ");
	scanf("%f", &c);
	k = c + 273.15;
	printf("Celsius %f \n Kelvin: %f ", c, k);
	
	
	return 0;
}
