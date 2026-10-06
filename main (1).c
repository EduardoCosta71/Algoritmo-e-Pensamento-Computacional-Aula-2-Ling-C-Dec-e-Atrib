#include <stdio.h>

int main(void) {

    int matriz[3][4];
    int soma = 0;
    
    //Adciona os numeros dentro da tabela.
    for(int i = 0; i < 3; i++){
        
        for(int j = 0; j < 4; j++){
            
            printf("Digite a quantidades do produto: %i", i+1);
            scanf("%i", &matriz[i][j]);
        }
    
    }
    
    //Imprime na tela a tabela.
    for(int i = 0; i < 3; i++){
        
        for(int j = 0; j < 4; j++){
            
            printf("%i", matriz[i][j]);
        }
        printf("\n");
        
    }
    //Faz a soma dos produtos
    for(int i = 0; i < 3; i++){
        
        for(int j = 0; j < 4; j++){
            
            soma += matriz[i][j];
            
        }
        printf("Soma da matriz: %i \n", soma);
    }
    
    for(int j = 0; j < 4; j++){
        
        int soma += matriz[]
    }
    

    return 0;
    

}