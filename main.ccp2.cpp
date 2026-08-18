#include <stdio.h>

int main() {
	
	int idade;
	float altura;
	char inicial;
	
	//Solicitando os valores.
	printf("Digite a inicial do seu nome: ");	
	scanf("%c", &inicial);
	
	printf("Digite a sua idade: ");
	scanf("%i", &idade);
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	//Apresentando dados na tela.
	
	printf("\n Dados de Registro.\n");
	printf("Inicial: %c \n", inicial);
	printf("Idade: %i \n", idade);
	printf("Altura: %.2f metros \n", altura);
	
	return 0;
	
}
