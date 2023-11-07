#include <stdio.h>

int main() {
    int matrizA[4][4], matrizB[4][4], resultado[4][4];
    char operacao[5];

   
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrizB[i][j]);
        }
    }

   
    scanf("%s", operacao);


    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (operacao[0] == 's' && operacao[1] == 'o' && operacao[2] == 'm' && operacao[3] == 'a') {
                resultado[i][j] += matrizA[i][j] + matrizB[i][j];
            } else if (operacao[0] == 's' && operacao[1] == 'u' && operacao[2] == 'b') {
                resultado[i][j] = matrizA[i][j] - matrizB[i][j];
            } else if (operacao[0] == 'm' && operacao[1] == 'u' && operacao[2] == 'l' && operacao[3] == 't') {
                resultado[i][j] = matrizA[i][j] * matrizB[i][j];
            }
        }
    }

    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
