#include <stdio.h>
#include <math.h>

int main(){
	
	// Vamos ver seu imc.
	
	float altura;
	float peso;
	float imc;
	
	
	printf("Digite seu peso em KG: ");
	scanf("%f", &peso);
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	imc = peso / pow(altura, 2);
	
	printf("O Indice de Massa Corporal é: %.2f \n", imc, "kg/m².");
	
	return 0;
	
	
}
