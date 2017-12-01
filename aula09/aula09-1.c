#include <stdio.h>
void mostrar(int v[],int t){
    int i;
   printf("\nVetor numerico\n");
    for(i=0; i<t; i++){
        printf("%d ",v[i]);

    }
}
void mostrarChar(char v[],int t){
    int i;
   printf("\nVetor de caracteres\n");
    for(i=0; i<t; i++){
        printf("%c ",v[i]);

    }
}
void preencher(int v[], int n){
    int i;
    for(i=0; i<n; i++)
    {
        printf("Digite um numero ");
        scanf("%d",&v[i]);
    }
}
main(){
    int v[5];
    char letras[5]= {'a','e','i','o','u'};
    preencher(v,5);
    mostrar(v,5);
    mostrarChar(letras,5);
}
