#include <stdlib.h>
#include <stdio.h>

main(){
    int *p = (int*)calloc(8000000000,sizeof(int));
    int i;
    if(p==NULL){
        printf("nao alocou");
    }else{
    for(i=0;i<5;i++){
        printf("%d\n",*(p+i));
    }
    for(i=0;i<5;i++){
        scanf("%d",(p+i));
    }
    putchar('\n');
    for(i=0;i<5;i++){
        printf("%d\n",*(p+i));
    }
    }
}
