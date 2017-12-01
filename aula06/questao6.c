#include <stdio.h>
main() {
    int i,s,soma=0;
    printf("DIGITE O LIMITE INFERIOR E SUPERIOR DO INTERVALO: ");
    scanf("%d %d",&i, &s);
    while(i<=s) {
        soma+=(i%2)==1?i:0;
        i++;
    }
    printf("A SOMA DOs NUMEROS IMPARES NO INTERVALO %d\n",soma);
}
