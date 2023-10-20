#include <stdio.h>
#include <stdlib.h>

int main() {
    int par[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, impar[10] =  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, aux=0;
    
    for (int i = 0; i < 10; i++){
        printf("Digite o valor da posicao %d: ", i+1);
        scanf("%d", &aux);
        if (aux % 2 == 0){
            par[i] = aux;
        }
        else{
            impar[i] = aux;
        }
        aux = 0;
    }
    printf("Pares:");
    for (int i = 0; i < 10; i++){
        printf(" %d", par[i]);
    }
    printf("\nImpares:");
    for (int i = 0; i < 10; i++){
        printf(" %d", impar[i]);
    }
    return 0;
}