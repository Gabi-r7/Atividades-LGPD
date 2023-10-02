#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[40], contpares=0;
    for(int i=0; i<40; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
        if(vetor[i]%2==0){
            contpares++;
        }
    }
    printf("A quantidade de números pares é: %d\n", contpares);
    return 0;
}
