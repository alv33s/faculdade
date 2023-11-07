#include <stdio.h>

int main(){
    int valoresinicias[10];
    int ultimovalor = 0;
    int i;
    int somas[10];
    int inicio = 9;
    int soma = 9;
    

    for(i= 0;  i < 10; i++){
        scanf("%d", &valoresinicias[i]);
    }
    for(i= 0;  i < 10; i++){
        if(i != 9){
            printf("%d ", valoresinicias[i]);
        } else{
            printf("%d", valoresinicias[i]);
        }
        
        
    }
    
    printf("\n");

    while(ultimovalor == 0){
        while(inicio != 0){
            for(int j = 0 ; j < inicio; j++){
                somas[j] = valoresinicias[j] + valoresinicias[j + 1];
               
                printf("%d", somas[j]);
              
                for(int k = 0; k <= j ; k++ ){
                 valoresinicias[k] = somas[k];
                    soma--;
                }
                if (j != inicio - 1){
                    printf(" ");
                }
            }
            
            printf("\n");
            
            inicio--;
        }
        ultimovalor = 1;
        
    }
    return 0;
}