#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor1[10], vetor2[10], vetor3[20];
    for (int i = 0, cont = 0; i < 10; i++)
    {
        printf("Digite um valor para ser armazenado no vetor1: ");
        scanf("%d", &vetor1[i]);
        vetor3[i+cont] = vetor1[i];
        cont++;
    }
    printf("\n");
    for (int i = 0, cont = 0; i < 10; i++)
    {
        cont++;
        printf("Digite um valor para ser armazenado no vetor2: ");
        scanf("%d", &vetor2[i]);
        vetor3[i+cont] = vetor2[i];
    }
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", vetor3[i]);
    }
    
    return 0;
}
