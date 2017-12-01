#include <stdio.h>
main(){
    int fat=1, n;
    printf("DIGITE UM NUMERO: ");
    scanf("%d",&n);
    for(;n>1;n--){
        fat*=n;
    }
    printf("O FATORIAL = %d",fat);
}
