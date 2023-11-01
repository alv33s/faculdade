#include <stdio.h> 

int main(){
    int valores[5];
    
    printf("Insira 5 valores:\n");
    //outras formas de fazer a incialização:
    //int valores[5] = {10,20,30,40,50}; - (começa pela posição 0 ) então posição desse vetor é 10, e não se pode acessar posições negativas 
    // ou
    for(int i = 0; i <= 4;i ++){
        printf("Valor na posicao %d :");
        scanf("%d", valores[5]);
        return 0;
    }
}
