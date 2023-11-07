#include <stdlib.h>
#include <stdio.h>

int n=0, count=0;

void imprime(int n){
    while (count <= n){
        if (count % 2 != 0){
            printf("%d\n", count);
        }
        count++;
    }    
}

int main() {
    printf("Digite um número: ");
    scanf("%d", &n);
    imprime(n);
    return 0;
}