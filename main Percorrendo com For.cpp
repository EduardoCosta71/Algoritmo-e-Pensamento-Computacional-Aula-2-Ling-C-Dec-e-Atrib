#include <stdio.h>

int main(void) {
	
	int salario[6];
	float soma = 0;
	float media = 0;
	float maior = 0;
	float menor = 0;
	
	for(int i = 0; i < 6; i++){
		
		printf("Digite os  salarios dos funcionarios");
		scanf("%i", &salario[i]);
		
		soma += salario[i];
		
	}
	
	media = soma / 6;
	
	printf("Media salario: %.2f \n", media);
	
	maior = salario[0];
	
	for(int i = 0; i < 6; i++){

		if(salario[i] > maior ) {
			maior = salario[i];
		}
		
			
	}
	
	printf("Maior salario: %.2f", maior);
	
	menor = salario[0];
	
	for(int i = 0; i < 6; i++){
		
		if (salario[i] < menor) { 
			
			menor = salario[i];
		}
		
		printf("Menor salario: %.2f", menor);
	}

	return 0;
	
}
