#include<stdio.h>
/*
    Um posto est� vendendo combust�veis com a seguinte tabela de descontos:
    Etanol - at� 20 litros, desconto de 3% por litro
    acima de 20 litros, desconto de 5% por litro
    Gasolina - at� 20 litros, desconto de 4% por litro
    acima de 20 litros, desconto de 6% por litro
    Escreva um algoritmo que leia o n�mero de litros vendidos e o tipo de combust�vel
    (codificado da seguinte forma: E-Etanol, G-gasolina), calcule e imprima o valor a ser pago
    pelo cliente sabendo-se que o pre�o do litro da gasolina � R$ 4,40 e o pre�o do litro do
    etanol � R$ 2,90.
*/
int main(){
    float litros, valor;
    char comb;

    printf("\n\tDigite quantos litros de combustivel ira colocar: ");
    scanf("%f", &litros);

    fflush(stdin);
    printf("\n\tDigite qual combustivel ira colocar [E-Etanol G-Gasolina]: ");
    scanf("%c", &comb);

    if (comb == 'E' || comb == 'e'){
        if (litros < 20){
            valor = litros *2.90;
            valor = valor - (3 * valor / 100);
        }
        else{
            valor = 2.90 * litros;
            valor = valor - (5 * valor / 100);
        }
    }
    else if (comb == 'G' || comb == 'g'){
        if (litros < 20){
            valor = 4.40 * litros;
            valor = valor - (4 * valor / 100);
        }
        else{
            valor = 4.40 * litros;
            valor = valor - (6 * valor / 100);
        }
    }

    printf("\n\tO valor a ser pago e de %f\n", valor);

    return 0;
}
