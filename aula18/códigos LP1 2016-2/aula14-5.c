#include <stdio.h>
typedef struct{
    int idade;
    float salario;
} DADOS;
main(){
    DADOS d[2]={{2,8.1},{5,88.8}};
    printf("IDADE %d\nSALARIO %.2f\n",d[0].idade, d[0].salario);
    printf("IDADE %d\nSALARIO %.2f\n",d[1].idade, d[1].salario);
    /*printf("DIGITE IDADE ");
    scanf("%d",&d1.idade);
    printf("DIGITE SALARIO ");
    scanf("%f",&d1.salario);
    printf("IDADE %d\nSALARIO %.2f",d1.idade, d1.salario);*/
}
