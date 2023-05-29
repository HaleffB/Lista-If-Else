#include <stdio.h>
/*
    Faça um programa que solicite ao usuário três números e os apresente na tela em ordem
    crescente.
*/
int main(){
    float n1, n2, n3;

    printf("\n\tDigite o primerio valor: ");
    scanf("%f", &n1);

    printf("\n\tDigite o segundo valor: ");
    scanf("%f", &n2);

    printf("\n\tDigite o terceiro valor: ");
    scanf("%f", &n3);

    if(n1 > n2 && n2 > n3){
        printf("\n\tA ordem e %f %f %f", n3, n2, n1);
    }
    else if (n2 > n1 && n1 > n3){
        printf("\n\tA ordem e %f %f %f", n3, n1, n2);
    }
    else if (n3 > n2 && n2 > n1){
        printf("\n\tA ordem e %f %f %f", n1, n2, n3);
    }
    else if (n1 > n3 && n3 > n2){
        printf("\n\tA ordem e %f %f %f", n2, n3, n1);
    }
    else if (n2 > n3 && n3 > n1){
        printf("\n\tA ordem e %f %f %f", n1, n3, n2);
    }
    else if (n3 > n1 && n1 > n2){
        printf("\n\tA ordem e  %f%f%f", n1, n2, n3);
    }
    else if (n1 == n2 && n3 < n2){
        printf("\n\tA ordem e %f %f %f", n3, n2, n1);
    }
    else if (n2 == n3 && n1 < n3){
        printf("\n\tA ordem e %f %f %f", n1, n3, n2);
    }
    else if(n1 == n3 && n2 < n1){
       printf("\n\tA ordem e %f %f %f", n2, n1, n3);
    }
    else if (n1 == n2 && n2 < n3){
        printf("\n\tA ordem e %f %f %f", n1, n2, n3);
    }
    else if (n2 == n3 && n3 < n1){
        printf("\n\tA ordem e %f %f %f", n2, n3, n1);
    }
    else if(n1 == n3 && n1 < n2){
       printf("\n\tA ordem e %f %f %f", n1, n3, n2);
    }
    return 0;
}
