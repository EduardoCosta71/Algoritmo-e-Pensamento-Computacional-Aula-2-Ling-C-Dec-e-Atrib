#include <stdio.h>

int main(){
	
	int a = 10;
	int b = 3;
	int resultado_soma;
	int resultado_comp;
	
	//Artmédico e Atribuição
	
	resultado_soma = a + b;
	
	printf("Soma: %d\n", resultado_soma);
	
	//Resto da divisão.
	
	printf("Resto da divisão de 10 por 3 é: %d\n", a%b);
	
	//Relacional.
	
	resultado_comp = (a>b);
	
	printf("A eh maio que B?  %d (1 para Sim, 0 para Não)\n", resultado_comp);
	
	//Logico.
	
	if (a>5 && b<5){
		printf("Ambas as condicoes sao verdadeiras!\n");
	}
	return 0;
}
