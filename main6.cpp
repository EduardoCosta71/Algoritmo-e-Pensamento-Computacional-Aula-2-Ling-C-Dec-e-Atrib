#include <stdio.h>

int main () {
	
	int horas;
	int minutos;
	int tempo;
	
	printf("Digite as Horas: ");
	scanf("%i", &horas);
	
	printf("Digite os Minutos: ");
	scanf("%i", &minutos);
	
	tempo = (horas * 60) + minutos;
	
	printf("O tempo em minutos foi: %i \n", tempo);
	
	return 0;
}
