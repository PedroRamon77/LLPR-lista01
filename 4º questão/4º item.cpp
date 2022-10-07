#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    float v1,v2,v3,v4,resultado;
    
    printf("Calculadora\n\n");
    
    printf("Digite o valor 1: ");
    scanf("%f",&v1);
    printf("Digite o valor 2: ");
    scanf("%f",&v2);
    printf("Digite o valor 3: ");
    scanf("%f",&v3);
    printf("Digite o valor 4: ");
    scanf("%f",&v4);
    
    resultado = (v1*v2*v3*v4);
    
    printf("\nO valor calculado foi:  %.2f",resultado);
    
    return 0;
}

