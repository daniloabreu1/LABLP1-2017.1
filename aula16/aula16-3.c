#include <stdio.h>
main(){
    int v[3]={1,3,6};
    int i,*pv=v;
    for(i=0;i<3;i++){
        printf("%d\n",*(pv+i));
    }
}
