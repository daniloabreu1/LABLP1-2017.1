#include <stdio.h>
int soma(int a, int b){
    return a+b;
}
main(){
    int x,y;
    printf("digite dois numeros ");
    scanf("%d %d",&x,&y);
    printf("a soma dos numeros %d",soma(x,y));
}
