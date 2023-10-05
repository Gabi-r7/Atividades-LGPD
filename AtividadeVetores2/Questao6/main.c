#include <stdio.h>
#include <stdlib.h>

int main() {
    int matrizinha[2][2], maior=0;
    for (int i = 0, i2 = 0; i < 4; i++)
    {
        printf("Digite o %d° numero: ", i+1);
        scanf("%d", &matrizinha[i][i2]);

        if (matrizinha[i][i2] > maior)
        {
            maior = matrizinha[i][i2];
        }
        


        if (i > (i2/2)){
            i2++;
        }
    }

    return 0;
}
