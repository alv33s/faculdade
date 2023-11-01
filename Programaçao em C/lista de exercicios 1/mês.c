#include <stdio.h>

int main(){
    int x;
    printf("escolha um numero de 1 a 12:\n");
    scanf("%d", & x);
    if(x == 1){
        printf("January");
    }
    else if(x == 2){
        printf("February");
    }
    else if(x == 3){
        printf("March");
    }
    else if(x == 4){
        printf("april");
    }
    else if(x == 5){
        printf("June");
    }
    else if(x == 6){
        printf("July");
    }
    else if(x == 7){
        printf("january");
    }
    else if(x == 8){
        printf("August");
    }
    else if(x == 9){
        printf("September");
    }
    else if(x == 10){
        printf("October");
    }
    else if(x == 11){
        printf("November");
    }
    else if(x == 12){
        printf("December");
    }
    else{
        printf("valor invalido");
    }
    
    return 0;
}