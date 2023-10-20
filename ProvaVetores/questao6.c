#include <stdio.h>
#include <stdlib.h>

int main() {
    int m1[4][4], m2[4][4], m3[4][4];
    
    for (int x = 0; x < 4; x++){
        for (int y = 0; y < 4; y++){
            printf("Digite o valor da posicao [%d][%d]: ", x, y);
            scanf("%d", &m1[x][y]);
        }
    }
    for (int x = 0; x < 4; x++){
        for (int y = 0; y < 4; y++){
            printf("Digite o valor da posicao [%d][%d]: ", x, y);
            scanf("%d", &m2[x][y]);
        }
    }
    for (int x = 0; x < 4; x++){
        for (int y = 0; y < 4; y++){
            if (m1[x][y] > m2[x][y]){
                m3[x][y] = m1[x][y];
            }
            else{
                m3[x][y] = m2[x][y];
            }
        }
    }
    for (int x = 0; x < 4; x++){
        printf("\n");
        for (int y = 0; y < 4; y++){
            printf("%d", m3[x][y]);
        }
    }    
    return 0;
}