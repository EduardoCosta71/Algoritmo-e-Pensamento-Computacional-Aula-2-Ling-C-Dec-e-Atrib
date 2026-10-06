#include <stdio.h>

int main(void) {

    int estudantes[3][4];
    
    //Adciona os numeros dentro da tabela.
    for(int i = 0; i < 3; i++){
        
        for(int j = 0; j < 4; j++){
            
            printf("Digite a nota do aluno %i: ", i+1);
            scanf("%i", &estudantes[i][j]);
        }
    
    }
    
    //Imprime na tela a tabela.
    for(int i = 0; i < 3; i++){
        
        for(int j = 0; j < 4; j++){
            
            printf("%i", estudantes[i][j]);
        }
        printf("\n");
        
    }
    //Faz a soma e media das notas
    int est1 = 0;
    float media = 0;
    for(int j = 0; j < 4; j++){
        
        est1 += estudantes[0][j];
        media = est1 /4;
      
    }
      printf("Media do estudante 1: %.2f \n", media);
      
      //Faz a soma e media das notas
    int est2 = 0;
    float mediaD = 0;
    for(int j = 0; j < 4; j++){
        
        est2 += estudantes[1][j];
        mediaD = est2 /4;
      
    }
    printf("Media do estudante 2: %.2f \n", mediaD);
    
    //Faz a soma e media das notas
    int est3 = 0;
    float mediaT = 0;
    for(int j = 0; j < 4; j++){
        
        est3 += estudantes[2][j];
        mediaT = est3 /4;
      
    }
    printf("Media do estudante 3: %.2f \n", mediaT);

    return 0;
   
}