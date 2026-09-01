#include <iostream>

int main(){
	
	//Media.
	
	float num1, num2, num3, num4;
	float media;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &num1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &num2);
	
	printf("Digite a terceira nota: ");
	scanf("%f", &num3);
	
	printf("Digite a quarta nota: ");
	scanf("%f", &num4);
	
	
	media = (num1 + num2 + num3 + num4) /4;
	
	printf("A media aritmetica é: %.2f \n", media);
	
	return 0;	
}

