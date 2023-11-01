#include <stdio.h>

int main(){
    int nmr1,nmr2,nmr3,maior1e2;
    scanf("%d", & nmr1);
    scanf("%d", & nmr2);
    scanf("%d", & nmr3);
    if (nmr1 - nmr2 > 0 && nmr1 - nmr3 > 0){
        printf("%d eh o maior", nmr1);
    }
    else if (nmr2 - nmr1 > 0 && nmr2 - nmr3 > 0){
    printf("%d eh o maior", nmr2);
    }
    else if (nmr3 - nmr1 > 0 && nmr3 - nmr2 > 0){
    printf("%d eh o maior", nmr3);
    }   
    return 0;
}


