#include <stdio.h>
int fat(int n);

void imprime(void){
    printf("\n\nola");
}

main(){
    int n;
    printf("digite um numero ");
    scanf("%d",&n);

    int x =fat(n);
    printf("fatorial = %d", x);
    imprime();

}
int fat(int n){
    int f=1,i;
    for(i=1;i<=n;i++){
        f*=i;
    }
    return f;
}
