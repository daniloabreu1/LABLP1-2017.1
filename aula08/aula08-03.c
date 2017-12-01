#include <stdio.h>
#include<math.h>
int menu()
{
    printf("\nop 1-area do trinagulo");
    printf("\nop 2-area do esfera");
    int o;
    printf("\nopcao >>> ");
    scanf("%d",&o);
    return o;
}
float areaTri(float base, float altura){
    return (base*altura)/2;
}
float areaEsfera(float raio){
    return 4*M_PI*(pow(raio,2));
}
main()
{
    int o;
    float b, a, r;
    while((o=menu())!=0)
    {
        switch(o)
        {
        case 1:
        {
            printf("digite a base e a altura ");
            scanf("%f %f",&b,&a);
            printf("\narea do triangulo %.3f\n",areaTri(b,a));
            break;
        }
        case 2:{
            printf("digite o raio ");
            scanf("%f",&r);
            printf("\narea da esfera %.3f\n",areaEsfera(r));
            break;
        }
        default:
            continue;

        }

    }
}
