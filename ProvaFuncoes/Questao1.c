#include <stdio.h>
#include <stdlib.h>

int n1, n2, maior;

int maximo(int n1, int n2){
    int maior;
    maior = n1;
    if (n2 > n1){
        maior = n2;
    }

    return maior;
}

int main(){
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    maior = maximo(n1, n2);
    printf("O maior número é: %d", maior);
    return 0;
}