#include <stdio.h>
#include <math.h>
/*
    Fa�a um programa que receba um n�mero e identifique se ele � positivo ou negativo. Se
    positivo apresente o triplo deste numero, se negativo apresente ele elevado ao quadrado.
*/
int main(){
    float num;

    printf("\n\tDigite um numero: ");
    scanf("%f", &num);

    if(num < 0){
        printf("\n\tO valor digitado elevado ao quadrado e %.2f", pow(num, 2));
    }else{
        printf("\n\tO triplo do valor digitado e %.2f", 3 * num);
    }
    return 0;
}
