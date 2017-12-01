#include <stdio.h>
#include <math.h>
main() {
    int op;
    float n1, n2;
    do {
        printf("1 - PARA ADICAO\n");
        printf("2 - PARA SUBTRACAO\n");
        printf("3 - PARA MULTIPLICACAO\n");
        printf("4 - PARA DIVISAO\n");
        printf("5 - PARA SAIR\n");
        printf("OPCAO >>> ");
        scanf("%d",&op);
        switch(op) {

        case 1:
            printf("\nDIGITE UM NUMERO: ");
            scanf("%f",&n1);
            printf("DIGITE UM NUMERO: ");
            scanf("%f",&n2);
            printf("RESULTADO DA ADICAO: %.1f\n\n",n1+n2);
            break;
        case 2:
            printf("\nDIGITE UM NUMERO: ");
            scanf("%f",&n1);
            printf("DIGITE UM NUMERO: ");
            scanf("%f",&n2);
            printf("RESULTADO DA ADICAO: %.1f\n\n",n1-n2);
            break;
        case 3:
            printf("\nDIGITE UM NUMERO: ");
            scanf("%f",&n1);
            printf("DIGITE UM NUMERO: ");
            scanf("%f",&n2);
            printf("RESULTADO DA ADICAO: %.1f\n\n",n1*n2);
            break;
        case 4:
            printf("\nDIGITE UM NUMERO: ");
            scanf("%f",&n1);
            printf("DIGITE UM NUMERO: ");
            scanf("%f",&n2);
            printf("RESULTADO DA ADICAO: %.1f\n\n",n1/n2);
            break;
        case 5:
            break;
            printf("SAINDO...")
        default:
            printf("OPCAO INVALIDA\n\n");
        }
    } while(op!=5);

}
