#include<stdio.h>
/*
    .Fazer um programa que possa converter uma determinada quantia dada em reais para
    uma das seguintes moedas:
    • F – franco suíço
    • L – libra esterlina
    • D – dólar
    • M – marco alemão
*/
int main(){
    float valor, conv;
    char moeda;

    printf("\n\tDgite o valor a ser convertido: ");
    scanf("%f", &valor);

    fflush(stdin);
    printf("\n\tDigite para qual moeda deseja converter\n\tF _ franco suico\n\tL _ libra esterlina\n\tD _ dolar\n\tM _ marco alemao\n\t->");
    scanf("%c", &moeda);

    if (moeda == 'F' || moeda == 'f'){
        conv = valor * 5.57;
    }
    else if (moeda == 'L' || moeda == 'l'){
        conv = valor * 6.25;
    }
    else if (moeda == 'D' || moeda == 'd'){
        conv = valor * 4.96;
    }
    else if (moeda == 'M' || moeda == 'm'){
        conv = valor * 2.82;
    }

    printf("\n\tO valor convertido e de %.2f\n", conv);

    return 0;
}
