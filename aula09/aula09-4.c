#include <stdio.h>
#include <math.h>
//questao 3
void quadrado(float v[10],float c[10]){
    int i;
    for(i=0; i<10; i++){
        c[i]=pow(v[i],2);
    }
}
void trocar(int x){
    x=5;
}
void mostrar(float x[10]){
    int i;
    putchar('\n');
    for(i=0; i<10; i++){
        printf("%.2f ",x[i]);
    }
    putchar('\n');
}
void preencher(float v[10]){
     int i;
    for(i=0; i<10; i++){
        printf("valor ");
        scanf("%f",&v[i]);
    }
}
main(){
    float v[10],c[10];
    preencher(v);
    quadrado(v,c);
    mostrar(v);
    mostrar(c);
    int x =10;
    trocar(x);
    printf("%d",x);
}
