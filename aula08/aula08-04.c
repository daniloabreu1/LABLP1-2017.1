#include <stdio.h>
int fatorial(int n){
    if (n==1){
        return 1;
    }else{
        return fatorial(n-1)*n;
    }
}
main(){
    int f;
    printf("digite um numero ");
    scanf("%d",&f);
    printf("o fatorial de %d = %d",f,fatorial(f));
}
