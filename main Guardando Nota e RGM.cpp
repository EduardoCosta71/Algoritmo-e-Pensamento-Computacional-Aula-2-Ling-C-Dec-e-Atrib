#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	FILE *arquivo;
	float nota;
	long int rgm;
	
	arquivo = fopen("nota.txt", "a");
	
 	if (arquivo == NULL){
 		
 		printf("Erro ao abrir o arquivo.");
 		return 1;
	 }
	 
	 printf("---- Cadastro de RGM e Notas (Digite o RGM ou 0 para sair.) --- \n\n");
	 
	 while(1){
	 	
	 	printf("\nDigite o RGM (8 digitos): ");
	 	
	 	if (scanf("%ld", &rgm) != 1){
	 		printf("Erro Nota Inválida.");
	 		
	 		while(getchar() != '\n');
	 		continue;
		 }
		 
		 if (rgm == 0){
		 	break;
		 }
		 
		do {
			
			printf("Digite a nota de 0 a 10 para o RGM %ld: ", rgm);
			if (scanf("%f", &nota) != 1) {
				
				printf("Nota invalida!");
				
				while (getchar() != 1);
				
				nota = -1; //Força da repetição do loop de validação.
				continue;
				
				
			}
			
			if (nota < 0.0 || nota > 10.0){
				
				printf("Nota fora do intervalo permitido (0.0 a 10.0). Tente novamente.");
				
			}
				
		} while (nota < 0.0 || nota > 10.00);
		
		fprintf(arquivo, "%ld %.1f\n", rgm, nota);
		printf("\nRegistro gravado com sucesso\n");
		
	 }
	 
	 
	 fclose(arquivo);
	 printf("\nPrograma encerrado.");
	 
	 return 0;
	 
	
	
}
