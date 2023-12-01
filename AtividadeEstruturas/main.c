#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

struct alunos{
    char nome[30];
    int idade;
    int matricula;
    float notaFinal;
};
struct alunos aluno[10];
int opcao;
float mediaGeral=0;

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Digite uma opção:\n1- Cadastrar aluno\n2- Listar alunos\n3- Calcular média\n4- Sair\n");
    scanf("%d", &opcao);      
    if (opcao == 4){
        return 0;
    }
    else if (opcao == 1){
        for (int i = 0; i < 10; i++){
            printf("Digite o nome do aluno: ");
            scanf("%s", &aluno[i].nome);
            printf("Digite a idade do aluno: ");
            scanf("%d", &aluno[i].idade);
            printf("Digite a matrícula do aluno: ");
            scanf("%d", &aluno[i].matricula);
            printf("Digite a nota final do aluno: ");
            scanf("%f", &aluno[i].notaFinal);
            printf("Aluno cadastrado com sucesso!\n");
        }
    }
    else if (opcao == 2){
        for (int i = 0; i < 10; i++){
            printf("Nome: %s\n", aluno[i].nome);
            printf("Idade: %d\n", aluno[i].idade);
            printf("Matrícula: %d\n", aluno[i].matricula);
            printf("Nota final: %.2f\n", aluno[i].notaFinal);
        }
    }
    else if (opcao == 3){
        for (int i = 0; i < 10; i++){
            mediaGeral += aluno[i].notaFinal;
        }
        printf("A média geral é: %.2f\n", mediaGeral/10);
    }
    else{
        printf("Opção inválida!\n");
    }
    main();
}