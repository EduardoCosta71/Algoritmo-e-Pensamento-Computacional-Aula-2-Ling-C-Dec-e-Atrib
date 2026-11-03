#include <stdlib.h>
#include <stdio.h>
int main(void) {
	
	FILE *arquivo;
	char linha[100];
	
	//Abre o arquivo tabuada que já contem conteudo.
	arquivo = fopen("tabuada.txt", "r");
	
	//Verificaçã de NULO.
	if (arquivo == NULL){
		
		printf("Erro ao abrir o arquivo 'tabuada.txt!");
		return 1;
		
	}
	
	printf("---Conteudo do arquivo tabuada.txt --- \n\n");
	
	//Faz a leitura das linhas para adc no tabuada.
	while(fgets(linha, sizeof(linha), arquivo) != NULL){
		
		printf("%s", linha);
		
	}
	
	printf("\n ----------------------------------\n");
	
	fclose(arquivo);
	
	return 0;
}
