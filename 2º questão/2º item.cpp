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
    
    media = v1+v2+v3 /3;
    
    printf("\nO valor calculado da media entre os numeros %.2f , %.2f e %.2f foi: %.2f", v1 , v2 , v3 , media);
    

    printf("\n\n\nO valor encontrado da média não foi correto , pois sem os parenteses a expressão matematica está errada ao inves de somar os valores das variaveis v1,v2,v3 e so depois dividir por 3 está divindindo o v3 por 3 e somente depois somando os valores de v1,v2 com o valor da divisão v3/3.");

    return 0;    
}

