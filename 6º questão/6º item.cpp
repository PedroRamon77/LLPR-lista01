#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	printf("Calculadora\n\n");
	
	float v1,v2,v3,somatorio,subtracao;
	
	printf("Digite um valor: ");
	scanf("%f",&v1);
	printf("Digite o valor que deseja somar com o numero acima: ");
	scanf("%f",&v2);
	
	somatorio = v1+v2;
	
	printf("Digite o valor que deseja subtrair: ");
	scanf("%f",&v3);
	
	subtracao = somatorio - v3;
	
	printf("\n\n O valor calculado foi: %.2f",subtracao);
	
	return 0;		
}
