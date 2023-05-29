#include <stdio.h>
/*
    Faça um programa que leia os lados de um triângulo retângulo e exiba sua hipotenusa
    se e a hipotenusa for maior que 100 apresente na tela, “hipotenusa excede o tamanho
    permitido para área”, caso contrário exiba “hipotenusa aceita”.
*/
int main(){
    float l1 ,l2 ,hip;

    printf("\n\tDigite o valor dos catetos do triangulo: ");
    scanf("%f%f", &l1, &l2);

    hip = sqrt(pow(l1, 2) + pow(l2, 2));

    if(hip > 100){
        printf("\n\tHipotenusa de %.2f excede o tamanho permitido\n", hip);
    }
    else{
        printf("\n\tHipotenusa aceita %.2f\n", hip);
    }
    return 0;
}
