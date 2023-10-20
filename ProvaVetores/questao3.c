#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[10], repetidos[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, contrep=0;
    
    for (int i = 0; i < 10; i++){
        printf("Digite o valor da posicao %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < 10; i++){
        printf(" %d", vetor[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] == vetor[i+1] || vetor[i] == vetor[i+2] || vetor[i] == vetor[i+3] || vetor[i] == vetor[i+4] || vetor[i] == vetor[i+5] || vetor[i] == vetor[i+6] || vetor[i] == vetor[i+7] || vetor[i] == vetor[i+8] || vetor[i] == vetor[i+9]){
            contrep++;
            repetidos[i] = vetor[i];
            printf("\nO número repetido foi %d", repetidos[i]);
        }
    }
    if (contrep == 0){
        printf("\nNão foram encontrados números iguais");
    }
    else{
        printf("\nA quantidade de números que repetiram é de: %d", contrep);
    }
    return 0;
}