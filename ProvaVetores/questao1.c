#include <stdio.h>
#include <stdlib.h>

int main() {
    int v1[10], v2[10];
    
    for (int i = 0; i < 10; i++){
        printf("Digite o valor da posicao %d: ", i+1);
        scanf("%d", &v1[i]);
    }

    for (int i = 0; i < 10; i++){
        v2[i] = v1[i] * 5;
        printf("%-10d", v1[i]);
        printf("%d\n", v2[i]);
    }
    
    return 0;
}