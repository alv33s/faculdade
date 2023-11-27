#include <stdio.h>
#include <string.h>

int romanoparadecimal(char numeroromano[]) {
    int valores[15], n = strlen(numeroromano), decimal = 0;
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
    int binario[30], ne = 0;

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

char decimalParaHexadecimal(int decimal, char numeroromano[]) {
    char hexadecimal[20];  

    int indice = 0;
    while (decimal > 0) {
        int resto = decimal % 16;

        
        if (resto < 10) {
            hexadecimal[indice] = resto + '0';
        } else {
            hexadecimal[indice] = resto - 10 + 'a';
        }

        indice++;
        decimal /= 16;
    }

  
    printf("%s na base 16: ", numeroromano);
    for (int i = indice - 1; i >= 0; i--) {
        printf("%c", hexadecimal[i]);
    }
    printf("\n");
}

int main(){
    char numeroromano[13]; 
    fgets(numeroromano, 13, stdin);
    fflush(stdin);
    numeroromano[strcspn(numeroromano, "\n")] = 0;
    int decimal = romanoparadecimal(numeroromano);
    decimalparabinario(decimal,numeroromano);
    printf("%s na base 10: %d\n", numeroromano,decimal);
    decimalParaHexadecimal(decimal, numeroromano);
    
    return 0;
}
