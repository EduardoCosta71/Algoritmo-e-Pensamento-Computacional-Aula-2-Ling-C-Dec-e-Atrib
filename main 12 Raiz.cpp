#include <iostream>
#include <math.h>

int main (){
	
	float x1, y1;
	float x2, y2;
	float distancia;
	
	printf("Digite a cordenada X do 1° ponto: ");
	scanf("%f", &x1);
	
	printf("Digite a cordenada Y do 1° ponto: ");
	scanf("%f", &y1);
	
	printf("Digite a cordenada X do 2° ponto: ");
	scanf("%f", &x2);
	
	printf("Digite a cordenada Y do 2° ponto: ");
	scanf("%f", &y2);
	
	distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2 ));
	
	printf("A distancia entre os pontos é: %.2f \n", distancia);
	
	return 0;
	
	
}
