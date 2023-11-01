#include <stdio.h>

int main(){
    int n,a;
    scanf("%d", &n);
    a = 1;
    for(n; n>0; n--){
        printf("%d %d %d pum\n" , a,a + 1,a + 2);
        a += 4;
    }
    return 0;
}