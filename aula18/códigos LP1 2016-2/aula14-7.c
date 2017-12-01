#include <stdio.h>
typedef struct{
    float n1;
    float n2;
}NOTA;

typedef struct{
    int mat;
    NOTA n;
} ALUNO;

void mostrar(ALUNO a){
    a.mat = 234;
    a.n.n1 =2;
    a.n.n2 =3;
    printf("%.1f",a.n.n2);
}
main(){
    ALUNO a;
    mostrar(a);
}
