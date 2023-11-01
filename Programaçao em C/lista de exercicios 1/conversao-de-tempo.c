#include <stdio.h>

int main(){
    int x , m , h, hrs, min, segundos;
    printf("fale quantos segundos durou o evento:\n");
    scanf("%d", & x);
    h = x / 3600;
    hrs=x % 3600;
    m = hrs / 60;
    segundos = hrs % 60;
    
    printf("%d:", h);
    printf("%d:", m);
    printf("%d", segundos);
    return 0;

}