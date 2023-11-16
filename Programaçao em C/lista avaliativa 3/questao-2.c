#include <stdio.h>
#include <string.h>
#include <math.h>


int main(){
    int t;
    double a,i,V;
    
    scanf("%d\n %lf\n %lf", &t, &a, &i);

    if(t == 1){
        V = a *(1 + i)*((pow(1 + i, t) - 1)/i);
        printf("Montante ao fim do mes 1: R$ %.2lf\n", V);
    }
    else{
        for(int j = 1; j <= t; j++){
            V = a *(1 + i)*((pow(1 + i, j) - 1)/i);
            printf("Montante ao fim do mes %d: R$ %.2lf\n", j,V);
        }
    }
}