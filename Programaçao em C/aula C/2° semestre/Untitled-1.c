#include <stdio.h>

int main(){
    system("cls");
    int M [3][3]={
        {1, 4, 3},
        {2, 1 ,2},
        {0, 5, 6}
    };

    int determinante = 0;

    determinante = determinante + M[0][0] * M[1][1] * M[2][2];
    determinante = determinante + M[0][1] * M[1][2] * M[2][0];
    determinante = determinante + M[0][2] * M[1][0] * M[2][1];
    determinante = determinante + M[2][0] * M[1][1] * M[0][2];
    determinante = determinante + M[2][1] * M[1][2] * M[0][0];
    determinante = determinante + M[2][2] * M[1][0] * M[0][1];

    printf("determinente : %d", determinante);
}