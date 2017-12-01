#include <stdio.h>
void imprimir(int m[6]){
    int i;
    for(i=0;i<6;i++){
        printf("%d\n",m[i]);
    }
}
main(){
    int a[6]={1,0,5,-2,-5,7};
    imprimir(a);
    int soma=a[0]+a[1]+a[5];
    printf("soma dos elementos 0, 1 e 5 = %d\n",soma);
    a[3]=100;
    imprimir(a);
}
