#include <stdio.h>

int main () {
	
	int potencia;
	int horas_dia;
	float consumo;
	
	printf("Pontência do equipamento (w): ");
	scanf("%i", &potencia);
	
	printf("Horas de uso por dia? ");
	scanf("%i", &horas_dia);
	
	consumo = (potencia * horas_dia * 30) / 1000.0;
	
	printf("O consumo mensal de Watts é: %.2f \n", consumo, "Kwh");	
	
	return 0;
	
	
}

