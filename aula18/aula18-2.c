#include <stdio.h>
typedef struct {
    int mat;
    char nome[21];
} ALUNO;

void imprimir(ALUNO a){
    printf("MAT %d\nNOME %s\n\n",a.mat,a.nome);
}
void colocar(ALUNO *a){
    printf("DIGITE A MATRICULA ");
    scanf("%d",&a->mat);
    fflush(stdin);
    printf("DIGITE UM NOME ");
    gets(a->nome);
}
main(){
    ALUNO a1={2,"joao"};
    imprimir(a1);
    colocar(&a1);
    imprimir(a1);
}
