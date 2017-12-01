#include <stdio.h>
main() {
    int t,i,fat;
    float e=1;
    printf("DIGITE A QUANTIDADE DE TERMOS: ");
    scanf("%d",&t);
    while(t>1) {
        for(i=t,fat=1; i>1; i--) {
            fat*=i;
        }
        e+=(float)1/fat;
        t--;
    }
    printf("RESULTADO DE E = %f\n\n",e);
}
