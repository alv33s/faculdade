#include <stdio.h>
#include <string.h>

int verificacaodeplaca(char placa[]){ 
   
    char letras[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'} ;
    char numeros[10] ={ '1','2','3','4','5','6','7','8','9','0'};
    int validacao = 0;
        

    for(int i = 0; i < 3; i++){
        for(int j = 0; i < strlen(letras); j++){
            if(placa[i] == letras[j]){ 
                validacao += 1;   
                break;
            } else if(placa[i] == '-'){
                validacao -= 1;
            }
        }
    }

    if(validacao != 3){
        printf("Placa invalida\n");
        return 0;
    }

    if(placa[3] == '-' || placa[3] == '1' || placa[3] =='2' || placa[3] =='3' || placa[3] =='4' || placa[3] =='5' || placa[3] =='6' || placa[3] =='7' || placa[3] =='8' || placa[3] =='9' || placa[3] =='0'){
        validacao += 1;
    }
    if(placa[4] == '1' || placa[4] =='2' || placa[4] =='3' || placa[4] =='4' || placa[4] =='5' || placa[4] =='6' || placa[4] =='7' || placa[4] =='8' || placa[4] =='9' || placa[4] =='0' || placa[4] =='A' || placa[4] == 'B' || placa[4] == 'C' || placa[4] == 'D' || placa[4] == 'E' || placa[4] == 'F' || placa[4] == 'G' || placa[4] == 'H' || placa[4] == 'I' || placa[4] == 'J' || placa[4] == 'K' || placa[4] == 'L' || placa[4] == 'M' || placa[4] == 'N' || placa[4] == 'O' || placa[4] == 'P' || placa[4] == 'Q' || placa[4] == 'R' || placa[4] == 'S' || placa[4] == 'T' || placa[4] == 'U' || placa[4] == 'V' || placa[4] == 'W' || placa[4] == 'X' || placa[4] == 'Y' || placa[4] == 'Z'){
        validacao += 1;
    } else{
        validacao -= 1;
    }
        
    if (placa[3] == '-'){
        for(int i = 5; i < 8;i++){
            for(int j = 0; i < strlen(numeros); j++){
                 if(placa[i] == letras[j]){ 
                    validacao += 1;   
                    break;
                }
                else{
                    continue;
                }
            }
        }
    }
        
    else if(placa[3] == '1' || placa[3] =='2' || placa[3] =='3' || placa[3] =='4' || placa[3] =='5' || placa[3] =='6' || placa[3] =='7' || placa[3] =='8' || placa[3] =='9' || placa[3] =='0'){
        for(int i = 5; i < 7;i++){
            for(int j = 0; i < strlen(numeros); j++){
                if(placa[i] == letras[j]){ 
                    validacao += 1;   
                    break;
                }
                else{
                    continue;
                }
            }
        }
    }
        
    else{
        validacao -= 1;
    }

    if(validacao == 7 || validacao == 8){
        return 1;
    }
    else{
        printf("Placa invalida\n");
        return 0;
            
    }
     
}   

int verificacaododia(char diadasemana[]) {
    int validou = 0;
    if (strcmp(diadasemana, "SEGUNDA-FEIRA") != 0 &&
        strcmp(diadasemana, "TERCA-FEIRA") != 0 &&
        strcmp(diadasemana, "QUARTA-FEIRA") != 0 &&
        strcmp(diadasemana, "QUINTA-FEIRA") != 0 &&
        strcmp(diadasemana, "SEXTA-FEIRA") != 0 &&
        strcmp(diadasemana, "SABADO") != 0 &&
        strcmp(diadasemana, "DOMINGO") != 0) {
        printf("Dia da semana invalido\n");
    } else {
        validou = 1;
        return validou;
    }
    return validou;
}

int main(){
    char placa[9], diadasemana[15];
    gets(placa);
    gets(diadasemana);

    diadasemana[strcspn(diadasemana, "\n")] = 0;
    placa[strcspn(placa, "\n")] = 0;
    int validacao = verificacaodeplaca(placa);
    int validou = verificacaododia(diadasemana);



    char ultimodigito = placa[strlen(placa) - 1];

    if(validacao && validou){ 
        if((strcmp(diadasemana , "SEGUNDA-FEIRA") == 0 && (ultimodigito == '0' || ultimodigito == '1'))||
        (strcmp(diadasemana , "TERCA-FEIRA") == 0 && (ultimodigito == '2' || ultimodigito == '3'))||
        (strcmp(diadasemana , "QUARTA-FEIRA") == 0 && (ultimodigito == '4' || ultimodigito == '5'))||
        (strcmp(diadasemana , "QUINTA-FEIRA") == 0 && (ultimodigito == '6' || ultimodigito == '7'))||
        (strcmp(diadasemana , "SEXTA-FEIRA") == 0 && (ultimodigito == '8' || ultimodigito == '9'))){
            if(strcmp(diadasemana , "SEGUNDA-FEIRA") == 0){
                for(int i = 0; i < strlen(placa); i++){
                    printf("%c", placa[i]);
                }
                printf(" nao pode circular segunda-feira\n",placa);
            } else if(strcmp(diadasemana , "TERCA-FEIRA") == 0){
                for(int i = 0; i < strlen(placa); i++){
                    printf("%c", placa[i]);
                }
                printf(" nao pode circular terca-feira\n",placa);
            } else if(strcmp(diadasemana , "QUARTA-FEIRA") == 0){
                for(int i = 0; i < strlen(placa); i++){
                    printf("%c", placa[i]);
                }
                printf(" nao pode circular quarta-feira\n");
            } else if(strcmp(diadasemana , "QUINTA-FEIRA") == 0){
                for(int i = 0; i < strlen(placa); i++){
                    printf("%c", placa[i]);
                }
                printf(" nao pode circular quinta-feira\n");
            } else if(strcmp(diadasemana , "SEXTA-FEIRA") == 0){
                for(int i = 0; i < strlen(placa); i++){
                    printf("%c", placa[i]);
                }
                printf(" nao pode circular sexta-feira\n");
            } 
            
        }
        else if(strcmp(diadasemana , "SABADO") == 0 || strcmp(diadasemana , "DOMINGO") == 0) {
            printf("Nao ha proibicao no fim de semana\n");
            
        }
        else if((strcmp(diadasemana , "SEGUNDA-FEIRA") == 0 && (ultimodigito != '0' || ultimodigito != '1'))||
        (strcmp(diadasemana , "TERCA-FEIRA") == 0 && (ultimodigito != '2' || ultimodigito != '3'))||
        (strcmp(diadasemana , "QUARTA-FEIRA") == 0 && (ultimodigito != '4' || ultimodigito != '5'))||
        (strcmp(diadasemana , "QUINTA-FEIRA") == 0 && (ultimodigito != '6' || ultimodigito != '7'))||
        (strcmp(diadasemana , "SEXTA-FEIRA") == 0 && (ultimodigito != '8' || ultimodigito != '9'))){
            if(strcmp(diadasemana , "SEGUNDA-FEIRA") == 0){
                for(int i = 0; i < strlen(placa); i++){
                    printf("%c", placa[i]);
                }
                printf(" pode circular segunda-feira\n");
            } else if(strcmp(diadasemana , "TERCA-FEIRA") == 0){
                for(int i = 0; i < strlen(placa); i++){
                    printf("%c", placa[i]);
                }
                printf(" pode circular terca-feira\n");
            } else if(strcmp(diadasemana , "QUARTA-FEIRA") == 0){
                for(int i = 0; i < strlen(placa); i++){
                    printf("%c", placa[i]);
                }
                printf(" pode circular quarta-feira\n");
            } else if(strcmp(diadasemana , "QUINTA-FEIRA") == 0){
                for(int i = 0; i < strlen(placa); i++){
                    printf("%c", placa[i]);
                }
                printf(" pode circular quinta-feira\n");
            } else if(strcmp(diadasemana , "SEXTA-FEIRA") == 0){
                for(int i = 0; i < strlen(placa); i++){
                    printf("%c", placa[i]);
                }
                printf(" pode circular sexta-feira\n");
            } 
        }
        else{
            return 0;
        }
    } else{
        return 0;
    }
    return 0;
}     
