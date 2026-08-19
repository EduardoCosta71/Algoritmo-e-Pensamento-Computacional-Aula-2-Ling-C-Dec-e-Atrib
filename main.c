#include <stdio.h>

int main () {

    float comprimento, largura, area, perimetro;

    printf("Programa Jardim Retangular\n");

    printf("Digite o comprimento do jardim: ");

    printf("Digite o comprimento do jardim: ");
    scanf("%f", &comprimento);

    printf("Digite a largura do jardim: ");
    scanf("%f", &largura);

    perimetro = 2 * (comprimento + largura);
    area = comprimento * largura;

    printf("Perímetro do Jardim: %.2f\n", perimetro);
    printf("Área do Jardim: %.2f\n", area);

    return 0;
}
