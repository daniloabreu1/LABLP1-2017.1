#include <stdio.h>
typedef struct{
    float n1;
    float n2;
}NOTAS;
typedef struct {
    int mat;
    char nome[21];
    NOTAS n;
} ALUNO;

void imprimir(ALUNO a){
    printf("MAT %d\nNOME %s\n",a.mat,a.nome);
    printf("\nNOTA 1 = %.2f\nNOTA 2 = %.2f\n\n",a.n.n1,a.n.n2);
}
void colocar(ALUNO *a){
    printf("DIGITE A MATRICULA ");
    scanf("%d",&a->mat);
    fflush(stdin);
    printf("DIGITE UM NOME ");
    gets(a->nome);
    printf("DIGITE A NOTA 1: ");
    scanf("%f",&a->n.n1);
    printf("DIGITE A NOTA 2: ");
    scanf("%f",&a->n.n2);
}
main(){
    ALUNO a1={2,"joao",{7.1,2.9}};
    imprimir(a1);
    colocar(&a1);
    imprimir(a1);
}
