#include <stdio.h>
typedef struct{
    float n1;
    float n2;
}NOTA;

typedef struct{
    int mat;
    char nome[50];
    NOTA n;
} ALUNO;

void mostrar(ALUNO a){
    printf("MAT %d\n",a.mat);
    printf("NOME %s\n",a.nome);
    printf("NOTA1 %.2f\n",a.n.n1);
    printf("NOTA2 %.2f\n\n",a.n.n2);
}
void ler(ALUNO *a){
    printf("MAT ");
    scanf("%d",&a->mat);
    fflush(stdin);
    printf("NOME ");
    gets(a->nome);
    printf("NOTA1 ");
    scanf("%f",&a->n.n1);
    printf("NOTA2 ");
    scanf("%f",&a->n.n2);
    putchar('\n');
}
main(){
    ALUNO a={123,"JOAO",{7.1,6.77}};
    mostrar(a);
    ler(&a);
    mostrar(a);
}
