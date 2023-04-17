#include <stdio.h>

int main(void){
    
    int n1;
    int n2;
    int n3;
    int  resultado;
    
    printf("Digite um numero:");
    scanf("%d", &n1);
    
    printf("Digite outro numero: ");
    scanf("%d", &n2);
    
    printf("Digite mais um numero: ");
    scanf("%d", &n3);
    
    resultado = n1 + n2 + n3;
    
    //scanf("%d", &resultado);
    
    printf("%d", resultado);
    
    return 0;
}
