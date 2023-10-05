#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nomes[5][20];
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %d nome: ", i+1);
        scanf("%s", &nomes[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", nomes[i]);
    }
    for (int i = 5; i >= 0; i--){
        printf("%s\n", nomes[i]);
    }
    return 0;
}
