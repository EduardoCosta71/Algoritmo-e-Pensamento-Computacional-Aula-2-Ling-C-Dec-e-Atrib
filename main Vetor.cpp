#include <stdio.h>

int main(void) {
	
	int salario[4];
	
	
	for(int i = 0; i < 4; i++){
		
		printf("Digite o salario do funcionario: \n");
		scanf("%i", &salario[i]);
	
	}
	
	for(int contador = 0; contador < 4; contador++){
	    
	    printf("Funcionario %i: %i \n", contador + 1, salario[contador]);
	}
	

	return 0;
	
}

