
#include <stdio.h>

int sacarDinheiro(float *saldo, float saque){
    
    if (*saldo >= saque){
        
        *saldo -= saque;
        return 1;
    }
    return 0;
}

int main (){
    
    float saldoConta = 30.00;
    float saqueConta = 40.00;
    
    if (sacarDinheiro(&saldoConta, saqueConta)){
        
        printf("Saque realizado com sucesso! Saldo Atual: %.2f", saldoConta);
        
    } else{
        
        printf("Saldo insulficiente, voce tem R$ %.2f", saldoConta);
    }
    
    return 0;
   
}