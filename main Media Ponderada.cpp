#include <stdio.h>

int main() {
	
	float not1, not2, not3;
	float media;
	
	printf("Digite a nota 1: ");
	scanf("%f", &not1);
	
	printf("Digite a nota 2: ");
	scanf("%f", &not2);
	
	printf("Digite a nota 3: ");
	scanf("%f", &not3);
	
	media = (not1 * 1 + not2 * 2 + not3 * 4) / (1 + 2 + 4);
	
	printf("Sua media ponderada é: %.2f \n", media);
	
	return 0;
	
	
	
}


