#include <stdio.h>

int main () {
	
	int a;
	int b;
	int totalSoma;
	int totalSub;
	int totalMult;
	
	printf("Digite o primeiro numero: ");
	scanf("%i", &a);
	
	printf("Digite o segundo numero: ");
	scanf("%i", &b);
	
	totalSoma = a + b;
	totalSub = a - b;
	totalMult = a * b;
	
	printf("O resultado da soma é: %i \n", totalSoma);
	printf("O resultado da subtracao é: %i \n", totalSub);
	printf("O resultado da multiplicacao é: %i \n", totalMult);
	
	return 0;
	
	
	
}
