#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    int v1,v2,quociente,resto;
    
    printf("Calculadora \n\n");
    
    printf("Digite o valor que deseja ser dividido: ");
    scanf("%d",&v1);
    printf("Digite o valor que deseja que divida o numero acima: ");
    scanf("%d",&v2);

    quociente = v1/v2;
    resto = v1%v2;
    
    printf("\nO quociente foi:  %d",quociente);
    printf("\nO resto dessa divisão foi:  %d",resto);
    
    return 0;
}

