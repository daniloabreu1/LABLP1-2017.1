#include <stdio.h>
typedef struct{
    int idade;
    float salario;
} DADOS;
main(){
    DADOS d1={2,9.0};
    printf("IDADE %d\nSALARIO %.2f\n",d1.idade, d1.salario);
    printf("DIGITE IDADE ");
    scanf("%d",&d1.idade);
    printf("DIGITE SALARIO ");
    scanf("%f",&d1.salario);
    printf("IDADE %d\nSALARIO %.2f",d1.idade, d1.salario);
}
