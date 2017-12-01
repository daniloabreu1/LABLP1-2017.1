#include <stdio.h>
#include <string.h>
void dobro(int *p){
    *p+=*p;

}
int* passar(){
    int x =4;
    return &x;
}
char *texto(){
    return "TEXTO";
}

main(){
    int p, *px;
    printf("DIGITE UM NUMERO ");
    scanf("%d",&p);
    dobro(&p);
    printf("VALOR DE P %d",p);
    px=passar();
    printf("\n%d",*px);
    char palavra[8];
    strcpy(palavra,texto());
    puts(palavra);
}
