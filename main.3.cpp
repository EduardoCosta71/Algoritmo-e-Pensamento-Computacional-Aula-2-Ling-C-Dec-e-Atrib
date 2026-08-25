#include <stdio.h>

int main() {
	
	//Declaração de variaveis.
	
	float media, valorUm, valorDois;
	
	// Captação dos valores.
	
	printf("Digite o valor 1: ");
	scanf("%f", &valorUm);
	
	printf("Digite o valor 2: ");
	scanf("%f", &valorDois);
	
	media = (valorUm + valorDois) / 2;
	
	//verificação de aprovado ou reprovado.
	
	if(media <= 5) {
		
	printf("Você reprovou!");
	
	} else {
		
		printf("Voce passou!");
	}
	return 0;
} 
