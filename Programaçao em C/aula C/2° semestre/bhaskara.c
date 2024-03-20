#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float a,b,c,x1,x2,delta;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    delta = b*b-4*a*c;
    x1 = (-b + sqrt(delta))/(2*a);
    printf("%.2f\n", x1);
    x2 = (-b - sqrt(delta))/(2*a);
    printf("%.2f\n", x2);
    return 0;
    
}
