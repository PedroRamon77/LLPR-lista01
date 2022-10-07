#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    float v1,v2,media;
    
    printf("Média\n\n");
    
    printf("Digite o valor 1: ");
    scanf("%f",&v1);
    printf("Digite o valor 2: ");
    scanf("%f",&v2);
    
    media = (v1+v2)/2;
    
    printf("\nO valor calculado da media entre os numeros %.2f e %.2f foi:  %.2f", v1 , v2 ,media);
    
    return 0;
}

