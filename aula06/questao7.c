#include <stdio.h>
#include <math.h>
main() {
    int a,b, c;
    a=b=1;
    do {
        a++;
        b++;
        c= sqrt(pow(a,2)+pow(b,2));
        printf("VALOR DE A = %d\nVALOR DE B = %d\nVALOR DE C = %d\nSOMA = %d\n",a,b,c,a+b+c);
       // getchar();
    } while(a+b+c!=1000);

}
