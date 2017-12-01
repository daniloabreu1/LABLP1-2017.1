#include <stdio.h>
main(){
    int num,soma,i=1;
    for(num=0,soma=0;num<100;num+=2){
        printf("TERMO %2d => %2d\n",i,num);
        soma+=num;
        i++;
    }
    printf("\nA SOMA DOS 50 NUMEROS PARES: %d\n",soma);
}
