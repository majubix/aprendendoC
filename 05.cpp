#include <stdio.h>

int main(){
    //questao pede numeros reais, porem
    //achei que faria mais sentindo com inteiros
    int a, resultado;
    printf("Digite um numero: ");
    scanf("%d", &a);
    resultado = a * a;
    
    printf("O quadrado de %d é %d", a, resultado);
    
    return 0;
}
