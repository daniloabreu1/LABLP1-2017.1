//QUESTAO 1
#include <stdio.h>
typedef struct{
    int hora, min, seg;
}HORARIO;

typedef struct{
    int dia, mes, ano;
}DATA;

typedef struct{
    DATA d;
    HORARIO h;
    char desc[101];
}COMP;

void preencher(COMP *c){
    printf("DIA ");
    scanf("%d",&c->d.dia);
    printf("MES ");
    scanf("%d",&c->d.mes);
    printf("ANO ");
    scanf("%d",&c->d.ano);
    printf("HORA ");
    scanf("%d",&c->h.hora);
    printf("MINUTO ");
    scanf("%d",&c->h.min);
    printf("SEGUNDO ");
    scanf("%d",&c->h.seg);
    fflush(stdin);
    printf("OBS: ");
    gets(c->desc);
}
void imprimir(COMP c){
    printf("\nDATA: %d/%d/%d\n",c.d.dia,c.d.mes,c.d.ano);
    printf("HORARIO: %d:%d:%d\n",c.h.hora,c.h.min,c.h.seg);
    printf("OBS: %s\n\n",c.desc);
}
main(){
    COMP c;
    preencher(&c);
    imprimir(c);

}
