#include <stdio.h>
#include <stdlib.h>

int main()
{
    char vetor[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %d° caractere de um número: ", i+1);
        scanf("%s", &vetor[i]);
    }
    printf("\nO número é: %s\n", vetor);
    return 0;
}
