#include <stdio.h>
#include <math.h>
/*
    Escreva um programa que identifique se um número é par ou impar. Se par apresentar
    a sua raiz quadrada, se impar apresentar sua metade.
*/
int main(){
    int n1;

    printf("\n\tDigite um numero inteiro: ");
    scanf("%i", &n1);

    if(n1 % 2 == 0){
        printf("\n\tO numero %i e par e sua raiz e %.2f\n", n1, sqrt(n1));
    }
    else{
        printf("\n\tO numero %i e impar e sua metade e %.2f\n",n1, (n1/2)+0.5);
    }
    return 0;
}
