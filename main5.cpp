#include <stdio.h>

int main() {
	
	// Atribuindo Valores.
	int produtosManha;
	int produtosTarde;
	int total;
	
	// Capturando Valores e Calculando.
	printf("Digite a quantidade de produtos recebidos de Manha: ");
	scanf("%i", &produtosManha);
	
	printf("Digite a quantidade de produtos recebidos de Tarde: ");
	scanf("%i", &produtosTarde);
	
	total = produtosManha + produtosTarde;
	
	printf("Total dos produtos: %i\n", total);
	
	return 0;
}
