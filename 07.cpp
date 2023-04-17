#include <stdio.h>

int main(){
    
    float c, f;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);
    f = c*(9.0/5.0)+32.0 ; 
    printf("A temperatura em Celsius: %f \n A temperatura em Fahrenheit: %f", c, f);
    
    return 0;
}

