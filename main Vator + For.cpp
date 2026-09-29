#include <stdio.h>

int main(void) {
	
	int medicoes[8];
	float media = 0;
	float soma = 0;
	int contador = 0;
	
	//Coloca os numeros dentro do vetor até chegar no limite.
	for(int i = 0; i < 8; i++){
		
		printf("Digite o X valor: ");
		scanf("%i", &medicoes[i]);
		
		// Realiza a soma das medicoes.
		soma += medicoes[i];
		
		//Verifica quais numeros ficaram acima da média .
		
	
	
}

	
	media = soma / 8;

	for(int i = 0; i < 8; i++){
		
		if (medicoes[i] > media) {
		
				contador++;
	
	}
		
		
	}
	
	
	
	printf("Media: %.2f \n", media);
	
	printf("Numeros acima de 7:  %i ", contador);
	
	return 0;
	

}
