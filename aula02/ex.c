#include <stdio.h>
#include <locale.h>
main(){
    setlocale(LC_ALL,"Portuguese");
    system("color F1");
    char p;
    int i;
    printf("DIGITE UM NÚMERO ");
    scanf("%d",&i);
    fflush(stdin);
    printf("DIGITE UM CARACTERE ");
    scanf("%c",&p);
    printf("O NUMERO %d\nCARACTERE %c\n\n",i,p);
    system("pause");
}
