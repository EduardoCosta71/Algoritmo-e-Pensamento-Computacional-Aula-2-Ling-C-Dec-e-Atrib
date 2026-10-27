#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	
 	char semana[7][20];
 	float consumo[7];
 	float total_consumo = 0;
 	int dias_preenchidos = 0;
 	FILE *arquivo;
 	
 	
 	for (int i = 0; i < 7; i++){
	 
 	printf("Digite o dia da semana: ", i + 1);
 	scanf("%19s", semana[i]);
 	
 
 	
 	if (strcmp(semana[i], "f") == 0){
 		
 		printf("Fim do programa. \n");
 		break;
	 }
	 
	printf("Digite o consumo em litros: ", semana[i]);
 	scanf("%f", &consumo[i]);
 	
 	printf("\n");
 	
 	total_consumo += consumo[i];
 	dias_preenchidos++;
 	
 	arquivo = fopen("consumo.txt", "a");
 	
 	if (arquivo == NULL){
 		
 		printf("O arquivo não rodou.");
 		return 1;
	 }
 	
 	fprintf(arquivo, "Consumo da semana: ");
 	for(int i = 0; i < dias_preenchidos; i++){
 		
 		fprintf(arquivo, "%s: %.2f Watts\n", semana[i], consumo[i]);
	 }

 	
 }
 	
 	for(int i = 0; i < dias_preenchidos; i++){
 		
 		printf("%s: %.2f Watts\n", semana[i], consumo[i]);
	 }
	 
	 fclose(arquivo);
	 printf("\nPrograma encerrado. consumo.txt");


	return 0;
}
