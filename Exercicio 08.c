#include <stdio.h>
/*
    Um comerciante comprou um produto e quer fendê-lo com um lucro de 45% se o valor
    da compra for menor que R$ 20,00; caso contrário, o lucro será de 30%. Entrar com o
    valor do produto e imprimir o valor da venda.
*/
int main(){
    float compra;

    printf("\n\tDigite o valor da compra bruta: ");
    scanf("%f", &compra);

    if(compra < 20){
        printf("\n\tO valor de venda devera ser de R$%.2f!\n", compra * 1.45);
    }
    else{
        printf("\n\tO valor de venda devera ser de R$%.2f!\n", compra * 1.30);
    }
    return 0;
}
