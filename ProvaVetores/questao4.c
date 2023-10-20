#include <stdio.h>
#include <stdlib.h>

int main() {
    int m1[20][20], m2[20][20];
    
    for (int x = 0; x < 20; x++){
        for (int y = 0; y < 20; y++){
            printf("Digite o valor da posicao [%d][%d]: ", x, y);
            scanf("%d", &m1[x][y]);
        }
    }
    for (int x = 0; x < 20; x++){
        for (int y = 0; y < 20; y++){
            printf("Digite o valor da posicao [%d][%d]: ", x, y);
            scanf("%d", &m2[x][y]);
        }
    }
    for (int x = 0; x < 20; x++){
        for (int y = 0; y < 20; y++){
            if (m1[x][y] == m2[x][y]){   //Não consegui fazer a verificação :(

            }
            {
            printf("\nMatriz1 (%d, %d): %d", x, y, m1[x][y]);
            printf("\nMatriz2 (%d, %d): %d", x, y, m2[x][y]);
            }
        }
    }
    return 0;
}