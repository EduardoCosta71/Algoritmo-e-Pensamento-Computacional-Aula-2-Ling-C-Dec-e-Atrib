#include <stdio.h>

int main() {
	
	// Resulução para loja.
	
	float largura;
	float comprimento;
	float valorCaixa;
	float areaTotal;
	int qtdCaixa;
	float custoTotal;
	
	printf("Digite a largura da area: ");
	scanf("%f", &largura);
	
	printf("Digite o comprimento da area em metros: ");
	scanf("%f", &comprimento);
	
	printf("Qual valor de cada caixa? ");
	scanf("%f", &valorCaixa);
	
	
	areaTotal = largura * comprimento;
	
	qtdCaixa = areaTotal / 2.5;
	
	custoTotal = qtdCaixa * valorCaixa;
	
	printf("Area total a ser revestida: %.2f \n", areaTotal);
	printf("Quantidade de caixas necessarias: %i \n", qtdCaixa);
	printf("Custo total da compra: %.2f \n", custoTotal);
	
	
	
	
}
