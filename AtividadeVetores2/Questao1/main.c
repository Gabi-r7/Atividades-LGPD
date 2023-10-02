#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vetor[16];
    for(int i=0; i<16; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    for(int i=0; i<16; i++){
        if(i<8){
            printf("%d\n", vetor[i+8]);
        }
        else{
            vetor[i] = vetor[i-8];
            printf("%d\n", vetor[i]);
        }
    }
    return 0;
}
