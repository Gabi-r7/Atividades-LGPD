#include <stdio.h>
#include <stdlib.h>

float saldo = 1000;
int opcao;

void verificarSaldo() {
    printf("Seu saldo é de R$%.2f", saldo);
    main();
}

void deposito() {
    float valor = 0;
    printf("Digite um valor para realizar o depósito: ");
    scanf("%f", &valor);
    saldo += valor;
    printf("Depósito realizado! Seu saldo é de R$%.2f", saldo);
    main();
}

void saque() {
    float valor = 0;
    printf("Digite um valor para realizar o saque: ");
    scanf("%f", &valor);
    saldo -= valor;
    printf("Saque realizado! Seu saldo é de R$%.2f", saldo);
    main();
}

int main(){
    printf("\n\nDigite:\n1- Verificar o Saldo.\n2- Realizar depósito.\n3- Realizar saque.\n4- Sair do Programa.\n Digite uma opção válida: ");
    scanf("%d", &opcao);
    if (opcao == 4){
        return 0;
    }
    else if (opcao == 1){
        verificarSaldo();
    }
    else if (opcao == 2){
        deposito();
    }
    else if (opcao == 3){
        saque();
    }
    else{
        printf("\n\nErro! Tente novamente.\n\n");
        main();
    }
}