#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    float v1,v2,v3,media;
    
    printf("Média\n\n");
    
    printf("Digite o valor 1: ");
    scanf("%f",&v1);
    printf("Digite o valor 2: ");
    scanf("%f",&v2);
    printf("Digite o valor 3: ");
    scanf("%f",&v3);
    
    media = (v1+v2+v3)/3;
    
    printf("\nO valor calculado da media entre os numeros %.2f , %.2f e %.2f foi:  %.2f", v1 , v2 , v3 ,media);
    
    return 0;
}

