#include <stdio.h>
int m,n;

void preencher(int matriz[][n]){
    int i, j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("valor ");
            scanf("%d",&matriz[i][j]);
        }
    }
}

void mostrar(int matriz[][n]){
    int i, j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",matriz[i][j]);
        }
        putchar('\n');
    }
}
main(){
    printf("digite M e N ");
    scanf("%d %d",&m,&n);
    int matriz[m][n];
    preencher(matriz);
    mostrar(matriz);
}
