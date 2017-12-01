#include <stdio.h>
struct dados{
    int idade;
    float salario;
};
main(){
    struct dados d1;
    printf("DIGITE IDADE ");
    scanf("%d",&d1.idade);
    printf("DIGITE SALARIO ");
    scanf("%f",&d1.salario);
    printf("IDADE %d\nSALARIO %.2f",d1.idade, d1.salario);
}
