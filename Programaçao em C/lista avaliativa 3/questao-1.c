#include <stdio.h>
#include <string.h>

int romanoparadecimal(char numeroromano[]) {
    int valores[12], n = strlen(numeroromano), decimal = 0;
    int i;
    
    for( i = 0; i < 12; i++){
        if(numeroromano[i] == 'I'){
            valores[i] = 1;
            
        }
        else if(numeroromano[i] == 'V'){
            valores[i] = 5;
            
        }
        else if(numeroromano[i] == 'X'){
            valores[i] = 10;
            
        }
        else if(numeroromano[i] == 'L'){
            valores[i] = 50;
            
        }
        else if(numeroromano[i] == 'C'){
            valores[i] = 100;
            
        }
        else if(numeroromano[i] == 'D'){
            valores[i] = 500;
            
        }
        else if(numeroromano[i] == 'M'){
            valores[i] = 1000;
            
        }
        else{
            valores[i] = 0;
        }
        
    }
    
    for ( i = 0; i < n ; i++){
        if(valores[i] < valores[i+1]){
            decimal = decimal - valores[i] ;
        }
        else if(valores[i] > valores[i + 1] || valores[i] == valores[i + 1]){
            decimal += valores[i];
        }
    }
    
    return decimal;
        
    

    
}

void decimalparabinario(int decimal, char numeroromano[]){
    int binario[15], ne = 0;

    for(int i = 0; decimal > 0 ; i++) {
        binario[i] = decimal%2;
        decimal = decimal/2;
        ne++;
    } 
    
    printf("%s na base 2: ", numeroromano);
    for (int j = ne - 1; j >= 0; j--) {
            printf("%d", binario[j]);
        }
    printf("\n");
    
}

int main(){
    char numeroromano[12]; 
    fgets(numeroromano, 12, stdin);

    int decimal = romanoparadecimal(numeroromano);
    decimalparabinario(decimal,numeroromano);
    printf("%s na base 10: %d\n", numeroromano,decimal);
    printf("%s na base 16: %X\n", decimal);
    
    return 0;
}