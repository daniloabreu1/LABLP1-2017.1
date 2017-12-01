#include <stdio.h>
typedef int inteiro;
typedef struct aluno{
    inteiro mat;
    char nome[21];
} ALUNO;
main(){
    ALUNO a1={2,"joao"};
    printf("MAT %d\nNOME %s\n\n",a1.mat,a1.nome);
    printf("DIGITE A MATRICULA ");
    scanf("%d",&a1.mat);
    fflush(stdin);
    printf("DIGITE UM NOME ");
    gets(a1.nome);
    printf("MAT %d\nNOME %s\n",a1.mat,a1.nome);
}
