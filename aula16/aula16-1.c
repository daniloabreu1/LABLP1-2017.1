#include <stdio.h>
main(){
    int x =2, *px=NULL;
    px=&x;
    printf("%p\n",px);
    printf("%p\n",&x);
    printf("%p\n",&px);
    printf("%d\n",x);
    printf("%d\n",*px);
    *px= 40;
    printf("%d\n",x);
    printf("%p\n",x);
}
