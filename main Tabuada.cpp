#include <stdio.h>
#include <stdlib.h>

int main() {
	

    int n;
	FILE *arquivo;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    
    if(n <= 0){
    	
    	printf("Apenas numeros inteiros!");
    	return 1;
	}
    
    arquivo = fopen("tabuada.txt", "w");
    
    if(arquivo == NULL){
    	
    	printf("O arquivo está vazio!");
    	
    	return 1;
	}
	
	//Grava o cabeçalho no arquivo
	fprintf(arquivo, "Tabuada do %i: \n", n);
	for (int i = 1; i <= 10; ++i){
		
		fprintf(arquivo, "%i * %i = %i \n", n, i, n * i);
		
	}
	
    
    printf("\nTabuada do %d:\n", n);
    
    for (int i = 1; i <= 10; ++i) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    
    fclose(arquivo);
    
    printf("Tabuada Gravada com Sucesso");
    
    return 0;
}

