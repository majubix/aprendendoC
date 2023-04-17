#include <stdio.h>

int main(){
    
    float c,f;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);
    c = 5.0 * (f - 32.0) / 9.0 ;
    printf("A temperatura em F: %f \n Temperatura em C: %f", f,c);
    
    
    
    return 0;
}

