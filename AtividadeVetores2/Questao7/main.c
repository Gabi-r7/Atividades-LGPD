#include <stdlib.h>
#include <stdio.h>

int main(){
    int matriz[4][4], matriz_trocada[4][4];
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            matriz_trocada[i][j] = matriz[i][j];
        }
    }
    for (int i = 0; i < 4; i++){
        matriz_trocada[i][3] = matriz[0][i];
        matriz_trocada[0][i] = matriz[i][3];
    }
    printf("Matriz resultante:\n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("%d ", matriz_trocada[i][j]);
        }
        printf("\n");
    }
    return 0;
}