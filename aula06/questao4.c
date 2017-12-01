#include <stdio.h>
main(){
    int n;
    float h=1;
    printf("DIGITE A QUANTIDADE DE TERMOS: ");
    scanf("%d",&n);
    while(n>1){
        h+=(float)1/n;
        n--;
    }
    printf("NUMERO HARMONICO %f\n\n",h);
}
